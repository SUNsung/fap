
        
        Badge.seed do |b|
  b.id = Badge::Reader
  b.name = 'Reader'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = false
  b.show_posts = false
  b.query = BadgeQueries::Reader
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.auto_revoke = false
  b.system = true
end
    
    module Vagrant
  # MachineIndex is able to manage the index of created Vagrant environments
  # in a central location.
  #
  # The MachineIndex stores a mapping of UUIDs to basic information about
  # a machine. The UUIDs are stored with the Vagrant environment and are
  # looked up in the machine index.
  #
  # The MachineIndex stores information such as the name of a machine,
  # the directory it was last seen at, its last known state, etc. Using
  # this information, we can load the entire {Machine} object for a machine,
  # or we can just display metadata if needed.
  #
  # The internal format of the data file is currently JSON in the following
  # structure:
  #
  #   {
  #     'version': 1,
  #     'machines': {
  #       'uuid': {
  #         'name': 'foo',
  #         'provider': 'vmware_fusion',
  #         'data_path': '/path/to/data/dir',
  #         'vagrantfile_path': '/path/to/Vagrantfile',
  #         'state': 'running',
  #         'updated_at': '2014-03-02 11:11:44 +0100'
  #       }
  #     }
  #   }
  #
  class MachineIndex
    include Enumerable
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # A default to_s implementation.
        def to_s
          self.class.to_s
        end
    
            # Sets a human-friendly description of the plugin.
        #
        # @param [String] value Description of the plugin.
        # @return [String] Description of the plugin.
        def self.description(value=UNSET_VALUE)
          get_or_set(:description, value)
        end
    
        def enable
      authorize @custom_emoji, :enable?
      @custom_emoji.update!(disabled: false)
      log_action :enable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.enabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end