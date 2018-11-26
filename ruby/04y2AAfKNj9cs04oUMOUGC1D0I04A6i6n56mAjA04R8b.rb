
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(2)
      expect(limit_reached_for(user.id, dt)).to eq(true)
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
        def destroy
      authorize @account_moderation_note, :destroy?
      @account_moderation_note.destroy!
      redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.destroyed_msg')
    end
    
        def show
      authorize @user, :change_email?
    end
    
        def resend
      authorize @user, :confirm?
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def show
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
        it 'ignores SHELL env var and always uses `sh`' do
      ENV['SHELL'] = '/bin/fakeshell'
      lambda { @object.system('echo $0') }.should output_to_fd('sh\n')
    end
  end
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
      platform_is_not :windows do
    it 'returns true when passed ?l if the argument is a symlink' do
      link = tmp('file_symlink.lnk')
      File.symlink(@file, link)
      begin
        Kernel.test(?l, link).should be_true
      ensure
        rm_r link
      end
    end
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
        $Kernel_trace_var_global = 'foo'
    
          desc 'Unpacks all the fixture tarballs'
      task :unpack, :force do |_t, args|
        begin
          Rake::Task['spec:fixture_tarballs:check_for_pending_changes'].invoke
        rescue SystemExit
          exit 1 unless args[:force]
          puts 'Continue anyway because `force` was applied.'
        end
        tarballs.each do |tarball|
          basename = File.basename(tarball)
          Dir.chdir(File.dirname(tarball)) do
            sh 'rm -rf #{basename[0..-8]} && tar zxf #{basename}'
          end
        end
      end
    end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            def show
          @image = Image.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@image)
        end
    
              can_event = 'can_#{@event}?'
    
            def new; end
    
            def new
          authorize! :admin, ReturnAuthorization
        end
    
            def taxon_params
          if params[:taxon] && !params[:taxon].empty?
            params.require(:taxon).permit(permitted_taxon_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def update
          authorize! :update, user
          if user.update_attributes(user_params)
            respond_with(user, status: 200, default_template: :show)
          else
            invalid_resource!(user)
          end
        end
    
            def zone_params
          attrs = params.require(:zone).permit!
          if attrs[:zone_members]
            attrs[:zone_members_attributes] = attrs.delete(:zone_members)
          end
          attrs
        end