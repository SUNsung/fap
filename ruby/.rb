\n\r\n\r  def update
    @notification_setting = current_user.notification_settings.find(params[:id])
    @saved = @notification_setting.update_attributes(notification_setting_params)\n\r\n\r  # Finds the projects belonging to the user in '@user', limited to either
  # public projects or projects visible to the given user.
  #
  # current_user - When given the list of projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)\n\r\n\r    validate :boundary_must_be_ip_range\n\r\n\r      if(inp.attributes[ikey] =~ /^http/i)
        inp[ikey] = ''
        next
      end\n\r\n\r            res << inp.to_html
          end
          res << '</form>'\n\r\n\rputs '* Loading Stdapi'\n\r\n\r      path = if timestamp == :latest
        Pathname.glob(metadata_versioned_path(version: version).join('*')).sort.last
      else
        timestamp = new_timestamp if timestamp == :now
        metadata_versioned_path(version: version).join(timestamp)
      end