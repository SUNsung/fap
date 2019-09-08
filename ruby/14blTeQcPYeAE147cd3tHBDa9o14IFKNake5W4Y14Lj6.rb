
        
            should 'filter symlink pointing outside site source' do
      ent1 = %w(_includes/tmp)
      entries = EntryFilter.new(@site).filter(ent1)
      assert_equal %w(), entries
    end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
            @hide_this_step = false
        if exception
          if @exceptions.include?(exception)
            @hide_this_step = true
            return
          end
    
        it 'returns nil when there is no match' do
      subject[:yosemite] = 'foo'
      expect(subject.fetch_checksum_for(:foo)).to be nil
    end
    
        it 'receives the owner's version if it has no own version' do
      subject.url('foo-42')
      subject.resource('bar') { url 'bar' }
      subject.owner = owner
    
            it 'returns true if one is higher' do
          setup_java_with_version '1.8.0_5'
          expect(subject).to be_satisfied
        end
      end
    end
  end
    
        def fetch
      downloader.fetch
      @downloaded_path = downloader.cached_location
    rescue => e
      error = CaskError.new('Download failed on Cask '#{cask}' with message: #{e}')
      error.set_backtrace e.backtrace
      raise error
    end
    
        def new_timestamp(time = Time.now)
      time.utc.strftime(TIMESTAMP_FORMAT)
    end
  end
end

    
      describe '#create' do
    before do
      @params = {
        :photo => {:aspect_ids => 'all'},
        :qqfile => Rack::Test::UploadedFile.new(
          Rails.root.join('spec', 'fixtures', 'button.png').to_s,
          'image/png'
        )
      }
    end
    
      # rubocop:disable Lint/PercentStringArray
  csp = {
    default_src:     %w['none'],
    connect_src:     %w['self' embedr.flickr.com geo.query.yahoo.com nominatim.openstreetmap.org api.github.com],
    font_src:        %w['self'],
    form_action:     %w['self' platform.twitter.com syndication.twitter.com],
    frame_ancestors: %w['self'],
    frame_src:       %w['self' blob: www.youtube.com w.soundcloud.com twitter.com platform.twitter.com
                        syndication.twitter.com player.vimeo.com www.mixcloud.com www.dailymotion.com media.ccc.de
                        bandcamp.com www.instagram.com],
    img_src:         %w['self' data: blob: *],
    media_src:       %w[https:],
    script_src:      %w['self' blob: 'unsafe-eval' platform.twitter.com cdn.syndication.twimg.com widgets.flickr.com
                        embedr.flickr.com www.instagram.com 'unsafe-inline'],
    style_src:       %w['self' 'unsafe-inline' platform.twitter.com *.twimg.com],
    manifest_src:    %w['self']
  }
  # rubocop:enable Lint/PercentStringArray
    
        it 'builds an account migration' do
      diaspora_entity = FactoryGirl.build(:account_migration)
      diaspora_entity.old_private_key = OpenSSL::PKey::RSA.generate(1024).export
      federation_entity = described_class.build(diaspora_entity)
    
        respond_with do |format|
      format.html { render 'index', locals: {no_contacts: current_user.contacts.mutual.empty?} }
      format.json { render json: @visibilities.map(&:conversation), status: 200 }
    end
  end
    
          context 'the getter' do
        before do
          subject.send('#{item}=', value)
        end
        it 'returns the value set previously' do
          expect(subject.send(item)).to(be == value)
        end
      end
    end
  end
    
      # A new FPM::Command
  def initialize(*args)
    super(*args)
    @conflicts = []
    @replaces = []
    @provides = []
    @dependencies = []
    @config_files = []
    @directories = []
  end # def initialize
    
      def initialize
    # Attributes for this specific package
    @attributes = {
      # Default work location
      :workdir => ::Dir.tmpdir
    }
    
        if path.nil?
      return @scripts_path
    else
      return File.join(@scripts_path, path)
    end
  end # def scripts_path
    
      def unpack_data_to
    'files'
  end
    
      # Input a package.
  #
  # The 'package' can be any of:
  #
  # * A name of a package on pypi (ie; easy_install some-package)
  # * The path to a directory containing setup.py
  # * The path to a setup.py
  def input(package)
    path_to_package = download_if_necessary(package, version)