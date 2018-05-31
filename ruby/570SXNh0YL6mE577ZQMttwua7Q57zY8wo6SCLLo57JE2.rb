
        
          def notification_setting_params
    allowed_fields = NotificationSetting::EMAIL_EVENTS.dup
    allowed_fields << :level
    params.require(:notification_setting).permit(allowed_fields)
  end
end

    
      # Finds the groups of the source user, optionally limited to those visible to
  # the current user.
  def execute(current_user = nil)
    segments = all_groups(current_user)
    
      def self.authenticate(user, app_id, json_response, challenges)
    response = U2F::SignResponse.load_from_json(json_response)
    registration = user.u2f_registrations.find_by_key_handle(response.key_handle)
    u2f = U2F::U2F.new(app_id)
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          attr_reader :scope_name, :resource
    
      def test_recursive_hash_value_array
    h = @cls[]
    h[[[1]]] = 1
    assert_equal(1, h.size)
    h[[[2]]] = 1
    assert_equal(2, h.size)
    
      it 'does not decode a float when fewer bytes than a float remain and the '*' modifier is passed' do
    [ ['\xff', []],
      ['\xff\x00', []],
      ['\xff\x00\xff', []]
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
    
      Ruby = Struct.new(:version, :platform)
    
      # This spec is a mess. It fails randomly, it hangs on MRI, it needs to be removed
  quarantine! do
  it 'killing dying running does nothing' do
    in_ensure_clause = false
    exit_loop = true
    t = ThreadSpecs.dying_thread_ensures do
      in_ensure_clause = true
      loop { if exit_loop then break end }
      ScratchPad.record :after_stop
    end
    
      def icon
    object.image
  end
    
            def clear_cache
          UI.message('Removing the whole cache dir #{@cache.root}') do
            FileUtils.rm_rf(@cache.root)
          end
        end
      end
    end
  end
end

    
            It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
          #-----------------------------------------------------------------------#
    end
  end
end

    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
          super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end
    
        module CommandRecorder
      def add_attachment(*args)
        record(:add_attachment, args)
      end
    
    module Paperclip
  module Validators
    extend ActiveSupport::Concern