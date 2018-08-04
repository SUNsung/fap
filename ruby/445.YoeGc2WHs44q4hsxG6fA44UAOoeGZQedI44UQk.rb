
        
        def main(pidfile, cmd)
  if middle_pid = Process.fork
    # outer process
    # Do not exit the outer process before the middle process finishes
    Process.waitpid(middle_pid)
    exit $?.exitstatus
  end
    
        def show
      authorize @account, :show?
      @account_moderation_note = current_account.account_moderation_notes.new(target_account: @account)
      @moderation_notes = @account.targeted_moderation_notes.latest
    end
    
      def url
    if object.needs_redownload?
      media_proxy_url(object.id, :original)
    else
      full_asset_url(object.file.url(:original))
    end
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/digest
  def digest
    NotificationMailer.digest(Account.first, since: 90.days.ago)
  end
end

    
            expect_updated_sign_in_at(user)
        expect(Redis.current.zcard(FeedManager.instance.key(:home, user.account_id))).to eq 3
        expect(Redis.current.get('account:#{user.account_id}:regeneration')).to be_nil
      end
    end
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end