
        
            def xpath(*args)
      doc.xpath(*args)
    end
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        private
    
        def html?
      mime_type.include? 'html'
    end
    
        def root_url
      @root_url ||= root_path? ? URL.parse(File.join(base_url.to_s, root_path)) : base_url.normalize
    end
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
              # Release access on this machine
          unlocked_release(entry.id)
        end
      end
    
    module Vagrant
  module Plugin
    module V1
      # This is the superclass for all V1 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
                # If we have this machine in our index, load that.
            entry = @env.machine_index.get(name.to_s)
            if entry
              @env.machine_index.release(entry)
    
            # Helper method that will set a value if a value is given, or otherwise
        # return the already set value.
        #
        # @param [Symbol] key Key for the data
        # @param [Object] value Value to store.
        # @return [Object] Stored value.
        def self.get_or_set(key, value=UNSET_VALUE)
          # If no value is to be set, then return the value we have already set
          return data[key] if value.eql?(UNSET_VALUE)
    
      def scope_for_collection
    case params[:id]
    when 'featured'
      @account.statuses.permitted_for(@account, signed_request_account).tap do |scope|
        scope.merge!(@account.pinned_statuses)
      end
    else
      raise ActiveRecord::NotFound
    end
  end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def update
      authorize @user, :change_email?
    
        def enable
      authorize @custom_emoji, :enable?
      @custom_emoji.update!(disabled: false)
      log_action :enable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.enabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end