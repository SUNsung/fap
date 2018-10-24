
        
        platforms :ruby do
  gem 'sqlite3'
end
    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
              def current_#{mapping}
            @current_#{mapping} ||= warden.authenticate(scope: :#{mapping})
          end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def blank?
      body.blank?
    end
    
          def initial_urls
        super + self.class.base_urls[1..-1].deep_dup
      end
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
        ff.each do |f|
      missing = f.missing_dependencies(hide: ARGV.values('hide'))
      next if missing.empty?
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
          replace_rules file do |rule|
        replace_properties rule do |props|
          props.gsub /(?<!\w)([\w-]+):(.*?);/ do |m|
            prop, vals = $1, split_prop_val.call($2)
            next m unless vals.length >= 2 && vals.any? { |v| v =~ /^[\+\-]\$/ }
            transformed = vals.map { |v| v.strip =~ %r(^\(.*\)$) ? v : '(#{v})' }
            log_transform 'property #{prop}: #{transformed * ' '}', from: 'wrap_calculation'
            '#{prop}: #{transformed * ' '};'
          end
        end
      end
    end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
        def open_file(filename, flag = 'r')
      return if filename.nil?
      flag = 'wb' if @options[:unix_newlines] && flag == 'w'
      file = File.open(filename, flag)
      return file unless block_given?
      yield file
      file.close
    end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          # @see Base#find
      def find(name, options)
        _find(@root, name, options)
      end
    
          def unprocessable_entity(message)
        render plain: { exception: message }.to_json, status: 422
      end
    
              inventory_unit.transaction do
            if inventory_unit.update_attributes(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end
    
            def find_payment
          @payment = @order.payments.find_by!(number: params[:id])
        end
    
            def show
          respond_with(stock_location)
        end