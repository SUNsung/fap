
        
          def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
                if class_mod.respond_to?(:available_configs)
              available_configs = class_mod.available_configs
              available_configs.each do |config|
                next unless options.key?(config)
                send(:'#{config}=', options.delete(config))
              end
            end
          end
    
          def remember_me?(token, generated_at)
        # TODO: Normalize the JSON type coercion along with the Timeoutable hook
        # in a single place https://github.com/plataformatec/devise/blob/ffe9d6d406e79108cf32a2c6a1d0b3828849c40b/lib/devise/hooks/timeoutable.rb#L14-L18
        if generated_at.is_a?(String)
          generated_at = time_from_json(generated_at)
        end
    
          def default_options
        DEFAULT_OPTIONS
      end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
          DOUBLE_SPLAT = '**'.freeze
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            private
    
            def mine_includes
          {
            order: {
              bill_address: {
                state: {},
                country: {}
              },
              ship_address: {
                state: {},
                country: {}
              },
              adjustments: {},
              payments: {
                order: {},
                payment_method: {}
              }
            },
            inventory_units: {
              line_item: {
                product: {},
                variant: {}
              },
              variant: {
                product: {},
                default_price: {},
                option_values: {
                  option_type: {}
                }
              }
            }
          }
        end
      end
    end
  end
end

    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
    class SinatraStaticServer < Sinatra::Base
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
    Sidekiq.configure_server do |config|
  #config.options[:concurrency] = 1
  config.redis = { db: 13 }
  config.options[:queues] << 'default'
  config.logger.level = Logger::ERROR
  config.average_scheduled_poll_interval = 2
  config.reliable! if defined?(Sidekiq::Pro)
end
    
        def normalized_hash(item_class)
      if item_class.is_a?(Class)
        raise(ArgumentError, 'Message must include a Sidekiq::Worker class, not class name: #{item_class.ancestors.inspect}') if !item_class.respond_to?('get_sidekiq_options')
        item_class.get_sidekiq_options
      else
        Sidekiq.default_worker_options
      end
    end
  end
end

    
        def retrieve_work
      work = Sidekiq.redis { |conn| conn.brpop(*queues_cmd) }
      UnitOfWork.new(*work) if work
    end
    
          def insert_after(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || entries.count - 1
        entries.insert(i+1, new_entry)
      end
    
      # Default to fake testing to keep old behavior
  Sidekiq::Testing.fake!
    
          def custom_tabs
        @custom_tabs ||= {}
      end
      alias_method :tabs, :custom_tabs
    
        # Gives a Geometry representing the given height and width
    def initialize(width = nil, height = nil, modifier = nil)
      if width.is_a?(Hash)
        options = width
        @height = options[:height].to_f
        @width = options[:width].to_f
        @modifier = options[:modifier]
        @orientation = options[:orientation].to_i
      else
        @height = height.to_f
        @width  = width.to_f
        @modifier = modifier
      end
    end
    
        # Returns the extension of the file. e.g. 'jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension.
    def extension attachment, style_name
      ((style = attachment.styles[style_name.to_s.to_sym]) && style[:format]) ||
        File.extname(attachment.original_filename).sub(/\A\.+/, ''.freeze)
    end