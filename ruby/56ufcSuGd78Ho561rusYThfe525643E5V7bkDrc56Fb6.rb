
        
          def force?
    flag? '--force'
  end
    
          # Find a bottle built for a previous version of macOS.
      def find_older_compatible_tag(tag)
        begin
          tag_version = MacOS::Version.from_symbol(tag)
        rescue ArgumentError
          return
        end
    
              find_every_method_call_by_name(body_node, :system).each do |method|
            next unless match = regex_match_group(parameters(method).first, /^(env|export)(\s+)?/)
    
              find_method_with_args(body_node, :system, 'cargo', 'build') do
            problem 'use \'cargo\', \'install\', \'--root\', prefix, \'--path\', \'.\''
          end
        end
      end
    end
    module FormulaAuditStrict
      class Text < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          find_method_with_args(body_node, :go_resource) do
            problem '`go_resource`s are deprecated. Please ask upstream to implement Go vendoring'
          end
        end
      end
    end
  end
end

    
          allow(OS).to receive(:mac?).and_return(true)
      allow(OS::Mac).to receive(:version).and_return(OS::Mac::Version.new(sierra_os_version))
    end
    
          remaining + non_options
    end
    
    describe Cask::Cmd::Cache, :cask do
  let(:local_transmission) {
    Cask::CaskLoader.load(cask_path('local-transmission'))
  }
    
          unless system curl_executable, '--silent', '--fail', '--output', '/dev/null', package_url
        package_blob = <<~JSON
          {'name': '#{bintray_package}',
           'public_download_numbers': true,
           'public_stats': true}
        JSON
        curl '--silent', '--fail', '--user', '#{bintray_user}:#{bintray_key}',
             '--header', 'Content-Type: application/json',
             '--data', package_blob, bintray_repo_url
        puts
      end
    
      def version(val = nil)
    @version ||= begin
      version = detect_version(val)
      version.null? ? nil : version
    end
  end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
    LogStash::Bundler.setup!
    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
        puts('Updating #{filtered_plugins.collect(&:name).join(', ')}') unless filtered_plugins.empty?
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
        def shipping_eq_billing_address?
      bill_address == ship_address
    end
    
          def gateway_error(error)
        text = if error.is_a? ActiveMerchant::Billing::Response
                 error.params['message'] || error.params['response_reason_text'] || error.message
               elsif error.is_a? ActiveMerchant::ConnectionError
                 Spree.t(:unable_to_connect_to_gateway)
               else
                 error.to_s
               end
        logger.error(Spree.t(:gateway_error))
        logger.error('  #{error.to_yaml}')
        raise Core::GatewayError, text
      end
    
      def self.check_unused_translations
    self.used_translations ||= []
    self.unused_translation_messages = []
    self.unused_translations = []
    load_translations(translations)
    translation_diff = unused_translations - used_translations
    translation_diff.each do |translation|
      Spree.unused_translation_messages << '#{translation} (#{I18n.locale})'
    end
  end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def product_property_params
          params.require(:product_property).permit(permitted_product_properties_attributes)
        end
      end
    end
  end
end

    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end