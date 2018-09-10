
        
            set :root, Pathname.new(File.expand_path('../..', __FILE__))
    set :sprockets, Sprockets::Environment.new(root)
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def request(urls, options = {}, &block)
      requests = [urls].flatten.map do |url|
        build_and_queue_request(url, options, &block)
      end
      requests.length == 1 ? requests.first : requests
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
      layout 'admin'
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
        def create
      authorize @user, :confirm?
      @user.confirm!
      log_action :confirm, @user
      redirect_to admin_accounts_path
    end
    
        def index
      authorize :domain_block, :index?
      @domain_blocks = DomainBlock.page(params[:page])
    end
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
        def create
      authorize :status, :update?
    
      private
    
          def flag(name, description: nil, required_for: nil, depends_on: nil)
        if name.end_with? '='
          required = OptionParser::REQUIRED_ARGUMENT
          name.chomp! '='
        else
          required = OptionParser::OPTIONAL_ARGUMENT
        end
        description = option_to_description(name) if description.nil?
        @parser.on(name, description, required) do |option_value|
          Homebrew.args[option_to_name(name)] = option_value
        end
    
    module Homebrew
  module_function
    
    module Homebrew
  module_function
    
        file package(gem, '.tar.gz') => ['pkg/'] do |f|
      sh <<-SH
        git archive \
          --prefix=#{gem}-#{source_version}/ \
          --format=tar \
          HEAD -- #{directory} | gzip > #{f.name}
      SH
    end
  end
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end