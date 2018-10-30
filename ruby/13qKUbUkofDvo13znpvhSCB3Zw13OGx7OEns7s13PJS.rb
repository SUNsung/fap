
        
              redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
        def create
      authorize ReportNote, :create?
    
      private
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        def sort_options(options)
      not_applicable_to_capistrano = %w(quiet silent verbose)
      options.reject! do |(switch, *)|
        switch =~ /--#{Regexp.union(not_applicable_to_capistrano)}/
      end
    
          def has_role?(role)
        roles.include? role.to_sym
      end