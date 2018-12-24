
        
        
      # If we found the resource handler for this resource, call its
      # procedure.
      if (p[1] == true)
        Rex::ThreadFactory.spawn('HTTPServerRequestHandler', false) {
          handler.on_request(cli, request)
        }
      else
        handler.on_request(cli, request)
      end
    else
      elog('Failed to find handler for resource: #{request.resource}',
        LogSource)
    
    =begin
   +-------------+---------------+-------------------------------------+
   | VALUE       | Name          | Description                         |
   +-------------+---------------+-------------------------------------+
   | 0x01        | Hangup        | The call has been hungup at the     |
   |             |               | remote end                          |
   |             |               |                                     |
   | 0x02        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x03        | Ringing       | Remote end is ringing (ring-back)   |
   |             |               |                                     |
   | 0x04        | Answer        | Remote end has answered             |
   |             |               |                                     |
   | 0x05        | Busy          | Remote end is busy                  |
   |             |               |                                     |
   | 0x06        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x07        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x08        | Congestion    | The call is congested               |
   |             |               |                                     |
   | 0x09        | Flash Hook    | Flash hook                          |
   |             |               |                                     |
   | 0x0a        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x0b        | Option        | Device-specific options are being   |
   |             |               | transmitted                         |
   |             |               |                                     |
   | 0x0c        | Key Radio     | Key Radio                           |
   |             |               |                                     |
   | 0x0d        | Unkey Radio   | Unkey Radio                         |
   |             |               |                                     |
   | 0x0e        | Call Progress | Call is in progress                 |
   |             |               |                                     |
   | 0x0f        | Call          | Call is proceeding                  |
   |             | Proceeding    |                                     |
   |             |               |                                     |
   | 0x10        | Hold          | Call is placed on hold              |
   |             |               |                                     |
   | 0x11        | Unhold        | Call is taken off hold              |
   +-------------+---------------+-------------------------------------+
=end
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
              # Decodes a Rex::Proto::Kerberos::Model::LastRequest
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode LastRequest, invalid input'
            end
    
          def full_errors_on_attribute
        object.errors.full_messages_for(attribute_name)
      end
    
            input_html_options[:required]        = input_html_required_option
        input_html_options[:'aria-required'] = input_html_aria_required_option
    
            if method.arity.zero?
          ActiveSupport::Deprecation.warn(SimpleForm::CUSTOM_INPUT_DEPRECATION_WARN % { name: namespace })
    
            label_options = html_options_for(:label, label_html_classes)
        if options.key?(:input_html) && options[:input_html].key?(:id)
          label_options[:for] = options[:input_html][:id]
        end
    
        def _current_user
      instance_eval(&RailsAdmin::Config.current_user_method)
    end
    
          field = model_config.list.fields.detect { |f| f.name.to_s == params[:sort] }
      column = begin
        if field.nil? || field.sortable == true # use params[:sort] on the base table
          '#{abstract_model.table_name}.#{params[:sort]}'
        elsif field.sortable == false # use default sort, asked field is not sortable
          '#{abstract_model.table_name}.#{model_config.list.sort_by}'
        elsif (field.sortable.is_a?(String) || field.sortable.is_a?(Symbol)) && field.sortable.to_s.include?('.') # just provide sortable, don't do anything smart
          field.sortable
        elsif field.sortable.is_a?(Hash) # just join sortable hash, don't do anything smart
          '#{field.sortable.keys.first}.#{field.sortable.values.first}'
        elsif field.association? # use column on target table
          '#{field.associated_model_config.abstract_model.table_name}.#{field.sortable}'
        else # use described column in the field conf.
          '#{abstract_model.table_name}.#{field.sortable}'
        end
      end
    
        def current_action?(action, abstract_model = @abstract_model, object = @object)
      @action.custom_key == action.custom_key &&
        abstract_model.try(:to_param) == @abstract_model.try(:to_param) &&
        (@object.try(:persisted?) ? @object.id == object.try(:id) : !object.try(:persisted?))
    end
    
        def object_infos
      model_config = RailsAdmin.config(object)
      model_label = model_config.label
      object_label = begin
        if object.new_record?
          I18n.t('admin.form.new_model', name: model_label)
        else
          object.send(model_config.object_label_method).presence || '#{model_config.label} ##{object.id}'
        end
      end
      %(<span style='display:none' class='object-infos' data-model-label='#{model_label}' data-object-label='#{CGI.escapeHTML(object_label.to_s)}'></span>).html_safe
    end
    
        def each_associated_children(object)
      associations.each do |association|
        case association.type
        when :has_one
          if child = object.send(association.name)
            yield(association, [child])
          end
        when :has_many
          children = object.send(association.name)
          yield(association, Array.new(children))
        end
      end
    end
    
            def nested_options
          model.nested_attributes_options.try { |o| o[name.to_sym] }
        end
    
        def self.asset_pipeline?
      defined?(::Sprockets)
    end
    
            register_instance_option :authorized? do
          enabled? && (
            bindings[:controller].try(:authorization_adapter).nil? || bindings[:controller].authorization_adapter.authorized?(authorization_key, bindings[:abstract_model], bindings[:object])
          )
        end
    
                  @most_recent_created = {}
              @count = {}
              @max = 0
              @abstract_models.each do |t|
                scope = @authorization_adapter && @authorization_adapter.query(:index, t)
                current_count = t.count({}, scope)
                @max = current_count > @max ? current_count : @max
                @count[t.model.name] = current_count
                next unless t.properties.detect { |c| c.name == :created_at }
                @most_recent_created[t.model.name] = t.model.last.try(:created_at)
              end
            end
            render @action.template_name, status: @status_code || :ok
          end
        end
    
                  respond_to do |format|
                format.html { render @action.template_name }
                format.js   { render @action.template_name, layout: false }
              end
    
      class Scope
    attr_reader :user, :scope