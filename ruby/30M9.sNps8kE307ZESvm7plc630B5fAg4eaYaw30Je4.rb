
        
                expect(FileStore::BaseStore.new.get_path_for_upload(upload))
          .to eq('original/2X/4/4170ac2a2782a1516fe9e13d7322ae482c1bd594.png')
      end
    end
    
          warn = GlobalSetting.max_reqs_per_ip_mode == 'warn' ||
        GlobalSetting.max_reqs_per_ip_mode == 'warn+block'
    
      it 'returns the correct language' do
    expect(I18n.t('foo', locale: :en)).to eq('Foo in :en')
    expect(I18n.t('foo', locale: :de)).to eq('Foo in :de')
    
        if @post && errors.blank? && !@opts[:import_mode]
      store_unique_post_key
      # update counters etc.
      @post.topic.reload
    
      class BulkInvite < Jobs::Base
    sidekiq_options retry: false
    
      def expired?
    created_at < SiteSetting.invite_expiry_days.days.ago
  end
    
        reviewable = ReviewableQueuedPost.new(
      created_by: @user,
      payload: payload,
      topic_id: @args[:topic_id],
      reviewable_by_moderator: true
    )
    reviewable.payload['title'] = @args[:title] if @args[:title].present?
    reviewable.category_id = args[:category] if args[:category].present?
    reviewable.created_new!
    
      def index
    offset = params[:offset].to_i
    
    require_dependency 'backup_restore/backup_store'
require_dependency 's3_helper'
    
        context 'dist' do
      it 'should have the dist in the release' do
        subject.name = 'example'
        subject.attributes[:rpm_dist] = 'el6'
        subject.version = '1.0'
        @target = Stud::Temporary.pathname
    
            data = ''
        record_length = determine_record_length(record_length)
    
      # Map of what scripts are named.
  SCRIPT_MAP = {
    :before_install     => 'preinstall',
    :after_install      => 'postinstall',
  } unless defined?(SCRIPT_MAP)
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        self.name = control['pkgname'][0]
    
      end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)