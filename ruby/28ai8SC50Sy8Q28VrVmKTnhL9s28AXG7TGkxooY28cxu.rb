
        
              # Sets the expiration time of a key.
      #
      # raw_key - The key for which to change the timeout.
      # timeout - The new timeout.
      def self.expire(raw_key, timeout)
        key = cache_key_for(raw_key)
    
          private
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def account_from_topic
    if hub_topic.present? && local_domain? && account_feed_path?
      Account.find_local(hub_topic_params[:username])
    end
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
        head 200
  end
    
        render_empty
  end
    
      included do
    before_action :authenticate_user!
    before_action :load_export
  end
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'