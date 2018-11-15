
        
                # This contains all the provider plugins by name, and returns
        # the provider class and options.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :providers
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
    
    # We need to keep a list of shared mixin names in order to convert the includes correctly
    # Before doing any processing we read shared mixins from a file
    # If a mixin is nested, it gets prefixed in the list (e.g. #gradient > .horizontal to 'gradient-horizontal')
    def read_mixins(mixins_file, nested: {})
      mixins = get_mixin_names(mixins_file, silent: true)
      nested.each do |selector, prefix|
        # we use replace_rules without replacing anything just to use the parsing algorithm
        replace_rules(mixins_file, selector) { |rule|
          mixins += get_mixin_names(unindent(unwrap_rule_block(rule)), silent: true).map { |name| '#{prefix}-#{name}' }
          rule
        }
      end
      mixins.uniq!
      mixins.sort!
      log_file_info 'mixins: #{mixins * ', '}' unless mixins.empty?
      mixins
    end
    
        alias log puts
    
        # get sha of the branch (= the latest commit)
    def get_branch_sha
      @branch_sha ||= begin
        if @branch + '\n' == %x[git rev-parse #@branch]
          @branch
        else
          cmd = 'git ls-remote #{Shellwords.escape 'https://github.com/#@repo'} #@branch'
          log cmd
          result = %x[#{cmd}]
          raise 'Could not get branch sha!' unless $?.success? && !result.empty?
          result.split(/\s+/).first
        end
      end
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
      def test_file_exists(path)
    exists?('f', path)
  end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def version
      ['--version', '-V',
       'Display the program version.',
       lambda do |_value|
         puts 'Capistrano Version: #{Capistrano::VERSION} (Rake Version: #{Rake::VERSION})'
         exit
       end]
    end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
          def product_scope
        if @current_user_roles.include?('admin')
          scope = Product.with_deleted.accessible_by(current_ability, :read).includes(*product_includes)
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            def create
          @order = Spree::Order.find_by!(number: params.fetch(:shipment).fetch(:order_id))
          authorize! :read, @order
          authorize! :create, Shipment
          quantity = params[:quantity].to_i
          @shipment = @order.shipments.create(stock_location_id: params.fetch(:stock_location_id))