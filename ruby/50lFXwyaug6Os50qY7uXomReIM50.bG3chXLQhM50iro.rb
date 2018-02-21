  setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
      def redirect_to_params
    redirect_to ActionController::Parameters.new(status: 200, protocol: 'javascript', f: '%0Aeval(name)')
  end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
              # Takes the environment such as +:production+ or +:development+.
          # This requires that the @configurations was initialized with a key that
          # matches.
          #
          #   Resolver.new('production' => {}).resolve_symbol_connection(:production)
          #   # => {}
          #
          def resolve_symbol_connection(spec)
            if config = configurations[spec.to_s]
              resolve_connection(config).merge('name' => spec.to_s)
            else
              raise(AdapterNotSpecified, ''#{spec}' database is not configured. Available: #{configurations.keys.inspect}')
            end
          end
    
    require 'abstract_unit'
    
        attr_accessor :attributes
    
            case method
        when NilClass
          raise 'Delivery method cannot be nil'
        when Symbol
          if klass = delivery_methods[method]
            mail.delivery_method(klass, (send(:'#{method}_settings') || {}).merge(options || {}))
          else
            raise 'Invalid delivery method #{method.inspect}'
          end
        else
          mail.delivery_method(method)
        end
    
          text.split.each do |word|
        if sentences.first.present? && (sentences.last + [word]).join(' ').length > len
          sentences << [word]
        else
          sentences.last << word
        end
      end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
              saved = if pending_reconfirmation?
            skip_reconfirmation!
            self.email = unconfirmed_email
            self.unconfirmed_email = nil
    
      protected
    
        def redirect
      store_location!
      if is_flashing_format?
        if flash[:timedout] && flash[:alert]
          flash.keep(:timedout)
          flash.keep(:alert)
        else
          flash[:alert] = i18n_message
        end
      end
      redirect_to redirect_url
    end
    
        def process_response?(response)
      response.body.present?
    end
    
              node.css('> ul > li > a').each do |link|
            n = link.content
            next if n.start_with?('Ex: ') || n.start_with?('Default ') || n =~ /example/i || IGNORE_ENTRIES.include?(n)
            id = link['href'].remove('#')
            n.downcase!
            n.prepend '#{name}: '
            entries << [n, id]
          end
        end
    
    ###
### main
###
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Cocaine::ExitStatusError
        ''
      rescue Cocaine::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        # Returns the basename of the file. e.g. 'file' for 'file.jpg'
    def basename attachment, style_name
      File.basename(attachment.original_filename, '.*'.freeze)
    end
    
        Hash.new.tap do |missing_styles|
      current_styles.each do |klass, attachment_definitions|
        attachment_definitions.each do |attachment_name, styles|
          registered = registered_styles[klass][attachment_name] || [] rescue []
          missed = styles - registered
          if missed.present?
            klass_sym = klass.to_s.to_sym
            missing_styles[klass_sym] ||= Hash.new
            missing_styles[klass_sym][attachment_name.to_sym] ||= Array.new
            missing_styles[klass_sym][attachment_name.to_sym].concat(missed.to_a)
            missing_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
          end
        end
      end
    end
  end
end
