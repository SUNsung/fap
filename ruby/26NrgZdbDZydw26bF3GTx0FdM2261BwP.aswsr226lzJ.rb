
        
              assert_match 'Minitest::BacktraceFilter', run_test_command('test/unit/backtrace_test.rb -b')
      assert_match 'Minitest::BacktraceFilter',
        run_test_command('test/unit/backtrace_test.rb --backtrace')
    end
    
        def remove_upload(upload)
      remove_file(upload.url, get_path_for_upload(upload))
    end
    
        it 'should return the right path' do
      optimized = Fabricate.build(:optimized_image, upload: upload, version: 1)
      expect(FileStore::BaseStore.new.get_path_for_optimized_image(optimized)).to eq(optimized_path)
    end
    
        it 'should import branch from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', '--single-branch', '-b', branch, ssh_url, @temp_folder)
    
      describe '.overrides_by_locale' do
    it 'should cache overrides for each locale' do
      override_translation('en', 'got', 'summer')
      override_translation('zh_TW', 'got', '冬季')
    
        def create_file_from_object(obj, include_download_source = false)
      expires = S3Helper::DOWNLOAD_URL_EXPIRES_AFTER_SECONDS
      BackupFile.new(
        filename: File.basename(obj.key),
        size: obj.size,
        last_modified: obj.last_modified,
        source: include_download_source ? presigned_url(obj, :get, expires) : nil
      )
    end
    
          it 'should not mark theme uploads as private' do
        fname = 'custom-theme-icon-sprite.svg'
        upload = UploadCreator.new(file_from_fixtures(fname), fname, for_theme: true).create_for(-1)
    
        before do
      s3_object.stubs(:put).returns(Aws::S3::Types::PutObjectOutput.new(etag: 'etag'))
    end
    
            if fetch_config['show_complete_frame']
          # calculate the final size of the screenshot to resize in one go
          # it may be limited either by the width or height of the frame
          image_aspect_ratio = @image.width.to_f / @image.height.to_f
          image_width = [frame_width, @image.width].min
          image_height = [frame_height, image_width / image_aspect_ratio].min
          image_width = image_height * image_aspect_ratio
          @image.resize('#{image_width}x#{image_height}') if image_width < @image.width || image_height < @image.height
        else
          # the screenshot size is only limited by width.
          # If higher than the frame, the screenshot is cut off at the bottom
          @image.resize('#{frame_width}x') if frame_width < @image.width
        end
      end
    
              enabled_services = services.select { |_k, v| v == true || (v != false && v.to_s != 'off') }.map { |k, v| [k, v == true || v.to_s == 'on' ? 'on' : v] }.to_h
          disabled_services = services.select { |_k, v| v == false || v.to_s == 'off' }.map { |k, v| [k, 'off'] }.to_h
    
            case bump_type
        when 'patch'
          patch += 1
        when 'minor'
          minor += 1
          patch = 0
        when 'major'
          major += 1
          minor = 0
          patch = 0
        end
    
          it 'returns the current version once parsed with appendix and prerelease' do
        test_content = 'spec.version = '1.3.2.4-SNAPSHOT''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2.4-SNAPSHOT')
        expect(@version_podspec_file.version_value).to eq('1.3.2.4-SNAPSHOT')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
        expect(@version_podspec_file.version_match[:appendix]).to eq('.4')
        expect(@version_podspec_file.version_match[:prerelease]).to eq('SNAPSHOT')
      end
    end
  end
end

    
      # Get the description for the page
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def description_for(page)
    description = (page.data.description || '')
      .gsub(''', '')
      .gsub(/\n+/, ' ')
      .squeeze(' ')
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
        # Action runner for executing actions in the context of this environment.
    #
    # @return [Action::Runner]
    def action_runner
      @action_runner ||= Action::Runner.new do
        {
          action_runner:  action_runner,
          box_collection: boxes,
          hook:           method(:hook),
          host:           host,
          machine_index:  machine_index,
          gems_path:      gems_path,
          home_path:      home_path,
          root_path:      root_path,
          tmp_path:       tmp_path,
          ui:             @ui,
          env:            self
        }
      end
    end
    
      describe '#machine_config' do
    let(:iso_env) { isolated_environment }
    let(:boxes) { Vagrant::BoxCollection.new(iso_env.boxes_dir) }
    
            expect(described_class.exec(ssh_info)).to eq(nil)
        expect(Vagrant::Util::SafeExec).to have_received(:exec)
          .with(ssh_path, 'vagrant@localhost', '-p', '2222', '-o', 'LogLevel=FATAL', '-o', 'StrictHostKeyChecking=no', '-o', 'UserKnownHostsFile=/dev/null', '-i', ssh_info[:private_key_path][0], '-6')
      end
    end
    
            entries.each do |entry|
          columns.each do |_, method|
            v = entry.send(method).to_s
            v = v[0...7] if method == :id
            v = v.ljust(widths[method]) if widths[method]
            @env.ui.info('#{v} ', new_line: false)
          end
    
          it 'returns http not found' do
        expect(response).to have_http_status(404)
      end
    end
  end
end

    
      def save
    case action
    when 'unfollow'
      unfollow!
    when 'remove_from_followers'
      remove_from_followers!
    when 'block_domains'
      block_domains!
    when 'approve'
      approve!
    when 'reject'
      reject!
    end
  end
    
      def create_report!
    @report = @source_account.reports.create!(
      target_account: @target_account,
      status_ids: @status_ids,
      comment: @comment,
      uri: @options[:uri]
    )
  end
    
    class ActivityPub::DistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
          put :update, params: {
        user: {
          setting_boost_modal: '1',
          setting_delete_modal: '0',
        }
      }
    
      # You can wrap each item in a collection of radio/check boxes with a tag,
  # defaulting to :span.
  # config.item_wrapper_tag = :span
    
      def verifier
    @verifier ||= ProofProvider::Keybase::Verifier.new(@proof.account.username, @proof.provider_username, @proof.token, domain)
  end
    
            subject.call(json, forwarder)
      end
    
        # This is dirty hack on JRuby for MiniTest 4
    assert orig_file.mtime.inspect == generated_file.mtime.inspect,
      '.js files should be the same timestamp of original'
    
      def test_description
    @comment = '= Hello'
    
      def test_concat
    @d.concat [@RM::BlankLine.new, @RM::BlankLine.new]
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
      task :all => [:readmes, :index]
end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end