
        
            it 'can be searched' do
      override_translation('en', 'wat', 'Overwritten value')
      expect(I18n.search('wat')).to include('wat' => 'Overwritten value')
      expect(I18n.search('Overwritten')).to include('wat' => 'Overwritten value')
    
        whisper = post.post_type == Post.types[:whisper]
    increase_posts_count = !post.topic&.private_message? || post.post_type != Post.types[:small_action]
    post.post_number ||= Topic.next_post_number(post.topic_id,
      reply: post.reply_to_post_number.present?,
      whisper: whisper,
      post: increase_posts_count)
    
        new_tag_name = DiscourseTagging.clean_tag(params[:tag][:id])
    tag.name = new_tag_name
    if tag.save
      StaffActionLogger.new(current_user).log_custom('renamed_tag', previous_value: params[:tag_id], new_value: new_tag_name)
      render json: { tag: { id: new_tag_name } }
    else
      render_json_error tag.errors.full_messages
    end
  end
    
        def free_bytes
      nil
    end
  end
end

    
          it 'removes the file from s3 on multisite' do
        test_multisite_connection('default') do
          upload = build_upload
          store.expects(:get_depth_for).with(upload.id).returns(0)
          s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
          upload.update!(url: '//s3-upload-bucket.s3.dualstack.us-west-1.amazonaws.com/uploads/default/original/1X/#{upload.sha1}.png')
          s3_object = stub
    
          json = JSON.parse(response.body)
      expect(response.status).to eq(200)
      expect(json['staff_action_logs'].length).to eq(1)
      expect(json['staff_action_logs'][0]['new_value']).to eq('value 1')
    end
    
          expect(list[:de_AT]).to eq([:de_AT, :de, :en])
      expect(list[:de]).to eq([:de, :en])
      expect(list[:en]).to eq([:en])
    end
    
      before(:each) do
    SiteSetting.enable_s3_uploads = true
    SiteSetting.s3_access_key_id = 'abc'
    SiteSetting.s3_secret_access_key = 'def'
    
          def tag
        MacOS.cat
      end
    end
    
    require 'utils/bottles'
    
      attr_reader :name, :resource, :prefix, :cellar, :rebuild
    
          if @quarantine
        Quarantine.cask!(cask: @cask, download_path: @downloaded_path)
      else
        Quarantine.release!(download_path: @downloaded_path)
      end
    end
  end
end

    
    module OS
  module Mac
    class Version < ::Version
      SYMBOLS = {
        catalina:    '10.15',
        mojave:      '10.14',
        high_sierra: '10.13',
        sierra:      '10.12',
        el_capitan:  '10.11',
        yosemite:    '10.10',
        mavericks:   '10.9',
      }.freeze
    
          verify_has_sha if require_sha? && !force?
      download
      verify
    end
    
      class PatchResource < Resource
    attr_reader :patch_files
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
      it 'resets the position of the stream pointer to data previously read' do
    gz = Zlib::GzipReader.new @io
    first_read = gz.read
    gz.rewind
    first_read.should == gz.read
  end
    
            get '/pipelines' do
          opts = {:graph => as_boolean(params.fetch('graph', false)),
                  :vertices => as_boolean(params.fetch('vertices', false))}
          payload = node.pipelines(opts)
          halt(404) if payload.empty?
          respond_with(:pipelines => payload )
        end
    
          if queue_type == 'persisted'
        queue_path = [:stats, :pipelines, pipeline_id, :queue]
        events = metric_store.get_shallow(*queue_path, :events).value
        queue_size_in_bytes = metric_store.get_shallow(*queue_path, :capacity, :queue_size_in_bytes).value
        max_queue_size_in_bytes = metric_store.get_shallow(*queue_path, :capacity, :max_queue_size_in_bytes).value
      end
    
        def fetch_node_stats(agent, stats)
      @global_stats.merge({
        'http_address' => stats.get_shallow(:http_address).value,
        'ephemeral_id' => agent.ephemeral_id
      })
    end
  end
end; end; end

    
        let(:default_jars_location)    { File.join('vendor', 'jar-dependencies') }
    let(:default_runtime_location) { File.join(default_jars_location,'runtime-jars','*.jar') }
    let(:default_test_location)    { File.join(default_jars_location,'test-jars','*.jar') }
    
          describe 'a simple plugin' do
        let(:plugin_source) { 'generator {}' }
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
      it 'returns the merged `ConfigPart#config_string`' do
    expect(subject.config_string).to eq(ordered_config_parts.collect(&:text).join('\n'))
  end
    
          def find_product(id)
        @product = product_scope.friendly.distinct(false).find(id.to_s)
      rescue ActiveRecord::RecordNotFound
        @product = product_scope.find_by(id: id)
        not_found unless @product
      end
    
            def purchase
          perform_payment_action(:purchase)
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
    class TestWebHelpers < Minitest::Test
  class Helpers
    include Sidekiq::WebHelpers
    
        class Mgr
      attr_reader :latest_error
      attr_reader :mutex
      attr_reader :cond
      def initialize
        @mutex = ::Mutex.new
        @cond = ::ConditionVariable.new
      end
      def processor_died(inst, err)
        @latest_error = err
        @mutex.synchronize do
          @cond.signal
        end
      end
      def processor_stopped(inst)
        @mutex.synchronize do
          @cond.signal
        end
      end
      def options
        { :concurrency => 3, :queues => ['default'] }
      end
    end
    
      it 'should remove dead jobs older than Sidekiq::DeadSet.timeout' do
    Sidekiq::DeadSet.stub(:timeout, 10) do
      Time.stub(:now, Time.now - 11) do
        dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: [])) # the oldest
      end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
        it 'joins array using ;' do
      expect(project.send('hook_#{hook_name}')).
        to eq('echo 'on hook'; echo 'another command here'')
    end
  end
end
    
      chain :with do |attrs|
    @expected_attrs = attrs
  end
    
          # $TMUXINATOR_CONFIG (and create directory) or ''.
      def environment
        environment = ENV['TMUXINATOR_CONFIG']
        return '' if environment.to_s.empty? # variable is unset (nil) or blank
        FileUtils::mkdir_p(environment) unless File.directory?(environment)
        environment
      end
    
        context 'defaulting to xdg with parent directory(s) that do not exist' do
      it 'creates parent directories if required' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return false
        allow(described_class).to receive(:home?).and_return false
    
          it 'returns false' do
        expect(described_class.editor?).to be_falsey
      end
    end
  end