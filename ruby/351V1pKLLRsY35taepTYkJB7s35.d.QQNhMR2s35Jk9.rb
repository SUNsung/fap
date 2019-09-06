
        
            before_action :ensure_configured
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
    
    require 'active_support/core_ext/module/attribute_accessors'
    
            css('.entry-detail[id$='instance-method']').each do |node|
          name = node.at_css('.signature > strong').content.strip
          name.prepend '#{self.name}#' unless slug.end_with?('toplevel')
          id = node['id'] = node['id'].remove(/<.+?>/)
          entries << [name, id] unless entries.last && entries.last[0] == name
        end
    
            # remove 'This reference reflects Leaflet 1.2.0.'
        css('h1 ~ p').each do |node|
          node.remove
          break
        end
    
          TYPE_BY_SUBPATH_STARTS_WITH = {
        'c3ref' => 'C Interface',
        'capi' => 'C Interface',
        'session' => 'C Interface: Session Module',
        'optoverview' => 'Query Planner',
        'queryplanner' => 'Query Planner',
        'syntax' => 'Syntax Diagrams',
        'lang' => 'Language',
        'pragma' => 'PRAGMA Statements',
        'cli' => 'CLI',
        'json' => 'JSON',
        'fileformat' => 'Database File Format',
        'tcl' => 'Tcl Interface',
        'malloc' => 'Dynamic Memory Allocation',
        'vtab' => 'Virtual Table Mechanism',
        'datatype' => 'Datatypes',
        'locking' => 'Locking and Concurrency',
        'foreignkey' => 'Foreign Key Constraints',
        'wal' => 'Write-Ahead Logging',
        'fts' => 'Full-Text Search',
        'rtree' => 'R*Tree Module',
        'rbu' => 'RBU Extension',
        'limits' => 'Limits',
        'howtocorrupt' => 'How To Corrupt',
        'geopoly' => 'Geopoly'
      }
    
        it 'ignores HOMEBREW_SKIP_OR_LATER_BOTTLES on release versions', :needs_macos do
      allow(ARGV).to receive(:skip_or_later_bottles?).and_return(true)
      allow(OS::Mac).to receive(:prerelease?).and_return(false)
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to eq(:mavericks)
    end
  end
end

    
              # Check for long inreplace block vars
          find_all_blocks(body_node, :inreplace) do |node|
            block_arg = node.arguments.children.first
            next unless block_arg.source.size > 1
    
          # Look in the standard locations, because even if port or fink are
      # not in the path they can still break builds if the build scripts
      # have these paths baked in.
      %w[/sw/bin/fink /opt/local/bin/port].each do |ponk|
        path = Pathname.new(ponk)
        paths << path if path.exist?
      end
    
        def quarantine
      return if @quarantine.nil?
      return unless Quarantine.available?
    
      before do
    @commit_id = 1
    FileUtils.mkpath cached_location
  end
    
    # Resource is the fundamental representation of an external resource. The
# primary formula download, along with other declared resources, are instances
# of this class.
class Resource
  include FileUtils
    
        def quote_field(field)
      field = String(field)
      encoded_quote_character = @quote_character.encode(field.encoding)
      encoded_quote_character +
        field.gsub(encoded_quote_character,
                   encoded_quote_character * 2) +
        encoded_quote_character
    end
    
    testdata( File.dirname($0) + '/scandata', ARGV ).each do |file|
  $stderr.print File.basename(file) + ': '
  begin
    ok = File.read(file)
    s = Racc::GrammarFileScanner.new( ok )
    sym, (val, _lineno) = s.scan
    if printonly then
      $stderr.puts
      $stderr.puts val
      next
    end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
          # create several required methods for this temporal file
      Tempfile.send(:define_method, 'content_type') { return att_content_type }
      Tempfile.send(:define_method, 'original_filename') { return file_name }
      file
    end
  end
    
    rails_env = BundlerHelper.rails_env
database = BundlerHelper.database
    
            expect(federation_entity.photos.size).to eq(1)
        expect(federation_photo.author).to eq(diaspora_entity.author.diaspora_handle)
        expect(federation_photo.guid).to eq(diaspora_photo.guid)
        expect(federation_photo.public).to eq(diaspora_photo.public)
        expect(federation_photo.created_at).to eq(diaspora_photo.created_at)
        expect(federation_photo.remote_photo_path).to eq(diaspora_photo.remote_photo_path)
        expect(federation_photo.remote_photo_name).to eq(diaspora_photo.remote_photo_name)
        expect(federation_photo.text).to eq(diaspora_photo.text)
        expect(federation_photo.height).to eq(diaspora_photo.height)
        expect(federation_photo.width).to eq(diaspora_photo.width)
      end
    
          def save_params_and_render_consent_form(endpoint)
        @o_auth_application = endpoint.o_auth_application
        @response_type = endpoint.response_type
        @redirect_uri = endpoint.redirect_uri
        @scopes = endpoint.scopes
        save_request_parameters
        @app = UserApplicationPresenter.new @o_auth_application, @scopes
        render :new
      end
    
          raise(UnknownPlugin) unless klass
      klass
    end
    
    module LogStash
  module PluginManager
  end
end
    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end
    
        it 'returns a flare tag if there are 2 flare tags in the list' do
      valid_article = create(:article, tags: %w[ama explainlikeimfive])
      expect(described_class.new(valid_article).tag.name).to eq('explainlikeimfive')
    end
  end
    
      def user_is_author?
    if record.instance_of?(Article)
      record.user_id == user.id
    else
      record.pluck(:user_id).uniq == [user.id]
    end
  end
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def css # custom css
        @css
      end
    
        assert_match /Edit/, last_response.body, ''Edit' link is blocked in history template'
    
    def date
  Date.today.to_s
end
    
        post '/compare/*' do
      @file     = encodeURIComponent(params[:splat].first)
      @versions = params[:versions] || []
      if @versions.size < 2
        redirect to('/history/#{@file}')
      else
        redirect to('/compare/%s/%s...%s' % [
            @file,
            @versions.last,
            @versions.first]
                 )
      end
    end
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
        context 'when first window is nameless' do
      let(:project) { nameless_window_project }
      let(:command) { '#{project.tmux} new-session -d -s #{project.name} ' }
    
          def stop_template
        asset_path 'template-stop.erb'
      end