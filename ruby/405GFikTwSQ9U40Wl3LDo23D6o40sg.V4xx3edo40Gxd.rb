
        
        describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent1])
    end
  end
end

    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
        it 'warns and returns nil when not parseable' do
      mock(STDERR).puts('WARNING: Invalid duration format: 'bogus'')
      expect(Utils.parse_duration('bogus')).to be_nil
    end
  end
    
      let :reverted_extract do
    old_extract
  end
    
      def set_statuses
    @statuses = scope_for_collection
    @statuses = cache_collection(@statuses, Status)
  end
    
        def enable
      authorize @custom_emoji, :enable?
      @custom_emoji.update!(disabled: false)
      log_action :enable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.enabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def index
      authorize :email_domain_block, :index?
      @email_domain_blocks = EmailDomainBlock.page(params[:page])
    end
    
          Homebrew.failed = true
      print '#{f}: ' if ff.size > 1
      puts missing.join(' ')
    end
  end
end

    
          clear_cache
      super(new_user, new_repo)
    
          def content_type
        case params[:format]
        when 'json'
          'application/json; charset=utf-8'
        when 'xml'
          'text/xml; charset=utf-8'
        end
      end
    
            def destroy
          @image = scope.images.accessible_by(current_ability, :destroy).find(params[:id])
          @image.destroy
          respond_with(@image, status: 204)
        end