
        
                # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
        EMOJI_PATHNAME = Pathname.new(Gemojione.images_path).freeze
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
            link = if options[:icon]
                 link_to_with_icon(
                   options[:icon],
                   titleized_label,
                   destination_url,
                   class: 'w-100 p-3 d-flex align-items-center'
                 )
               else
                 link_to(
                   titleized_label,
                   destination_url,
                   class: 'sidebar-submenu-item w-100 py-1 px-3 d-block #{'text-success' if selected}'
                 )
               end
    
                  expect(order.shipments.count).to eq(1)
              expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(2)
              expect(order.shipments.first.stock_location.id).to eq(stock_location.id)
            end
          end
    
            def index
          authorize! :index, Order
          @orders = Order.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@orders)
        end
    
          @@option_value_attributes = [
        :id, :name, :presentation, :option_type_name, :option_type_id,
        :option_type_presentation
      ]
    
    chdir APP_ROOT do
  # This script is a starting point to setup your application.
  # Add necessary setup steps to this file.
    
      # Debug mode disables concatenation and preprocessing of assets.
  # This option may cause significant delays in view rendering with a large
  # number of complex assets.
  config.assets.debug = true
    
      # Ignore bad email addresses and do not raise email delivery errors.
  # Set this to true and configure the email server for immediate delivery to raise delivery errors.
  # config.action_mailer.raise_delivery_errors = false