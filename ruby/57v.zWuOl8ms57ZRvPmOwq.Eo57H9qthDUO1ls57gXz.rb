
        
              # theme_config should not be overriding Jekyll's defaults
      theme_config.delete_if { |key, _| Configuration::DEFAULTS.key?(key) }
    
    SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('regex-check   - #{key}') { check_with_regex(text) }
    x.report('builtin-check - #{key}') { check_with_builtin(text) }
    x.compare!
  end
end
# ------------------------------------------------------------------------
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
        def get_path_for_upload(upload)
      extension =
        if upload.extension
          '.#{upload.extension}'
        else
          # Maintain backward compatibility before Jobs::MigrateUploadExtensions runs
          File.extname(upload.original_filename)
        end
    
        Category.where(id: @topic.category_id).update_all(latest_post_id: @post.id)
    Category.where(id: @topic.category_id).update_all(latest_topic_id: @topic.id) if @post.is_first_post?
  end
    
      def add_owners
    group = Group.find_by(id: params.require(:id))
    raise Discourse::NotFound unless group
    
          expect do
        @objects.delete_if { |obj| obj[:key] == context.params[:key] }
      end.to change { @objects }
    end)
    
      context 'removal from s3' do
    before do
      SiteSetting.s3_region = 'us-west-1'
      SiteSetting.s3_upload_bucket = 's3-upload-bucket'
      SiteSetting.s3_access_key_id = 's3-access-key-id'
      SiteSetting.s3_secret_access_key = 's3-secret-access-key'
      SiteSetting.enable_s3_uploads = true
    end
    
            json = JSON.parse(response.body)
        action = json['user_history_actions'].first
    
          before do
        subject.perform
      end
    
    RSpec.describe FollowLimitValidator, type: :validator do
  describe '#validate' do
    before do
      allow_any_instance_of(described_class).to receive(:limit_reached?).with(account) do
        limit_reached
      end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
          attr_reader :page, :diff, :versions, :message, :allow_editing
    
      test 'existing emoji' do
    get '/emoji/heart'
    assert_equal 200, last_response.status
    assert_equal 'image/png', last_response.headers['Content-Type']
    assert_equal [137, 80, 78, 71, 13, 10, 26, 10], last_response.body.each_byte.to_a[0..7]
  end
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body