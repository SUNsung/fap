
        
            def path
      @path ||= url.path
    end
    
          def stub(path, &block)
        @stubs[path] = block
        @stubs
      end
    end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
            # If an active machine of the same name/provider was not
        # found, it is already false.
        return false if !found
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
              # If we asked for reversed ordering, then reverse it
          machines.reverse! if options[:reverse]
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
      platform_is_not :windows do
    it 'does not expand shell variables when given multiples arguments' do
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('#{@shell_var}\n')
    end
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
    # Ensure the `pod` bin doesn’t think it needs to use Bundler.
ENV['COCOAPODS_NO_BUNDLER'] = '1'
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
        # also set the env LOGSTASH_HOME
    LOGSTASH_HOME = ENV['LOGSTASH_HOME'] = ::File.expand_path(::File.join(__FILE__, '..', '..', '..'))
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
      describe 'searching orders' do
    it 'is able to search orders' do
      fill_in 'q_number_cont', with: 'R200'
      click_on 'Filter Results'
      within_row(1) do
        expect(page).to have_content('R200')
      end
    
    desc 'clean the whole repository by removing all the generated files'
task :clean do
  rm_f  'Gemfile.lock'
  rm_rf 'sandbox'
  rm_rf 'pkg'
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end