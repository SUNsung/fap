
        
                  # Depending on the attribute, multiple values may
          # be returned. We need only one for username.
          # Ex. `uid` returns only one value but `mail` may
          # return an array of multiple email addresses.
          [username].flatten.first.tap do |username|
            username.downcase! if config.lowercase_usernames
          end
        end
    
          def save
        @changed = identity.save
      end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
      def destroy
    @filter.destroy
    redirect_to filters_path
  end
    
        def set_account_moderation_note
      @account_moderation_note = AccountModerationNote.find(params[:id])
    end
  end
end

    
            @user.send_confirmation_instructions
      end
    
        def set_user
      @user = Account.find(params[:account_id]).user || raise(ActiveRecord::RecordNotFound)
    end
    
        def resource_params
      params.require(:custom_emoji).permit(:shortcode, :image, :visible_in_picker)
    end
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
        def ordered_instances
      paginated_instances.map { |account| Instance.new(account) }
    end
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        assert_match /New/, last_response.body, ''New' link is blocked in pages template'
    
      test 'show edit page with header and footer and sidebar of multibyte' do
    post '/create',
         :content => 'りんご',
         :page    => 'Multibyte', :format => :markdown, :message => 'mesg'
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
    $:.unshift File.join(File.dirname(__FILE__), *%w[.. lib])
    
        # Extract the 'page' name from the file_path
    def extract_name(file_path)
      if file_path[-1, 1] == '/'
        return nil
      end