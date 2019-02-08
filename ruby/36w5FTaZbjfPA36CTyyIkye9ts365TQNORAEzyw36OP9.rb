
        
              # Reads an integer from the cache, or returns nil if no value was found.
      #
      # See Caching.read for more information.
      def self.read_integer(raw_key, timeout: TIMEOUT)
        value = read(raw_key, timeout: timeout)
    
            def importer_class
          LfsObjectImporter
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
            # attributes - A Hash containing the raw PR details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
          it 'returns an array of Kegs' do
        expect(subject.kegs.length).to eq 1
      end
    end
    
    =begin
 +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   | 0x01 | CALLED NUMBER  | Number/extension being called             |
   | 0x02 | CALLING NUMBER | Calling number                            |
   | 0x03 | CALLING ANI    | Calling number ANI for billing            |
   | 0x04 | CALLING NAME   | Name of caller                            |
   | 0x05 | CALLED CONTEXT | Context for number                        |
   | 0x06 | USERNAME       | Username (peer or user) for               |
   |      |                | authentication                            |
   | 0x07 | PASSWORD       | Password for authentication               |
   | 0x08 | CAPABILITY     | Actual CODEC capability                   |
   | 0x09 | FORMAT         | Desired CODEC format                      |
   | 0x0a | LANGUAGE       | Desired language                          |
   | 0x0b | VERSION        | Protocol version                          |
   | 0x0c | ADSICPE        | CPE ADSI capability                       |
   | 0x0d | DNID           | Originally dialed DNID                    |
   | 0x0e | AUTHMETHODS    | Authentication method(s)                  |
   | 0x0f | CHALLENGE      | Challenge data for MD5/RSA                |
   | 0x10 | MD5 RESULT     | MD5 challenge result                      |
   | 0x11 | RSA RESULT     | RSA challenge result                      |
   | 0x12 | APPARENT ADDR  | Apparent address of peer                  |
   | 0x13 | REFRESH        | When to refresh registration              |
   | 0x14 | DPSTATUS       | Dialplan status                           |
   | 0x15 | CALLNO         | Call number of peer                       |
   | 0x16 | CAUSE          | Cause                                     |
   | 0x17 | IAX UNKNOWN    | Unknown IAX command                       |
   | 0x18 | MSGCOUNT       | How many messages waiting                 |
   | 0x19 | AUTOANSWER     | Request auto-answering                    |
   | 0x1a | MUSICONHOLD    | Request musiconhold with QUELCH           |
   | 0x1b | TRANSFERID     | Transfer Request Identifier               |
   | 0x1c | RDNIS          | Referring DNIS                            |
   | 0x1d | Reserved       | Reserved for future use                   |
   | 0x1e | Reserved       | Reserved for future use                   |
   | 0x1f | DATETIME       | Date/Time                                 |
   | 0x20 | Reserved       | Reserved for future use                   |
   | 0x21 | Reserved       | Reserved for future use                   |
   | 0x22 | Reserved       | Reserved for future use                   |
   | 0x23 | Reserved       | Reserved for future use                   |
   | 0x24 | Reserved       | Reserved for future use                   |
   | 0x25 | Reserved       | Reserved for future use                   |
   | 0x26 | CALLINGPRES    | Calling presentation                      |
   | 0x27 | CALLINGTON     | Calling type of number                    |
   | 0x28 | CALLINGTNS     | Calling transit network select            |
   | 0x29 | SAMPLINGRATE   | Supported sampling rates                  |
   | 0x2a | CAUSECODE      | Hangup cause                              |
   | 0x2b | ENCRYPTION     | Encryption format                         |
   | 0x2c | ENCKEY         | Reserved for future Use                   |
   | 0x2d | CODEC PREFS    | CODEC Negotiation                         |
   | 0x2e | RR JITTER      | Received jitter, as in RFC 3550           |
   | 0x2f | RR LOSS        | Received loss, as in RFC 3550             |
   | 0x30 | RR PKTS        | Received frames                           |
   | 0x31 | RR DELAY       | Max playout delay for received frames in  |
   |      |                | ms                                        |
   | 0x32 | RR DROPPED     | Dropped frames (presumably by jitter      |
   |      |                | buffer)                                   |
   | 0x33 | RR OOO         | Frames received Out of Order              |
   | 0x34 | OSPTOKEN       | OSP Token Block                           |
   +------+----------------+-------------------------------------------+
=end
    
    
  def self.create_rakp_hmac_sha1_salt(con_sid, bmc_sid, con_rid, bmc_rid, bmc_gid, auth_level, username)
    con_sid +
    bmc_sid +
    con_rid +
    bmc_rid +
    bmc_gid +
    [ auth_level ].pack('C') +
    [ username.length ].pack('C') +
    username
  end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
              # Decodes the cusec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_cusec(input)
            input.value[0].value
          end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
        it 'succeeds for notification dropdown' do
      Timecop.travel(6.seconds.ago) do
        @notification.touch
      end
      get :index, format: :json
      expect(response).to be_success
      response_json = JSON.parse(response.body)
      note_html = Nokogiri::HTML(response_json['notification_list'][0]['also_commented']['note_html'])
      timeago_content = note_html.css('time')[0]['data-time-ago']
      expect(response_json['unread_count']).to be(1)
      expect(response_json['unread_count_by_type']).to eq(
        'also_commented'       => 1,
        'comment_on_post'      => 0,
        'contacts_birthday'    => 0,
        'liked'                => 0,
        'mentioned'            => 0,
        'mentioned_in_comment' => 0,
        'reshared'             => 0,
        'started_sharing'      => 0
      )
      expect(timeago_content).to include(@notification.updated_at.iso8601)
      expect(response.body).to match(/note_html/)
    end
    
    desc 'list tasks'
task :list do
  puts 'Tasks: #{(Rake::Task.tasks - [Rake::Task[:list]]).join(', ')}'
  puts '(type rake -T for more detail)\n\n'
end

    
        def generate(site)
      site.write_category_indexes
    end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
      option '--workdir', 'WORKDIR',
    'The directory you want fpm to do its work in, where 'work' is any file ' \
    'copying, downloading, etc. Roughly any scratch space fpm needs to build ' \
    'your package.', :default => Dir.tmpdir
    
      private
  # Copy a file or directory to a destination
  #
  # This is special because it respects the full path of the source.
  # Aditionally, hardlinks will be used instead of copies.
  #
  # Example:
  #
  #     clone('/tmp/hello/world', '/tmp/example')
  #
  # The above will copy, recursively, /tmp/hello/world into
  # /tmp/example/hello/world
  def clone(source, destination)
    logger.debug('Cloning path', :source => source, :destination => destination)
    # Edge case check; abort if the temporary directory is the source.
    # If the temporary dir is the same path as the source, it causes
    # fpm to recursively (and forever) copy the staging directory by
    # accident (#542).
    if File.expand_path(source) == File.expand_path(::Dir.tmpdir)
      raise FPM::InvalidPackageConfiguration,
        'A source directory cannot be the root of your temporary ' \
        'directory (#{::Dir.tmpdir}). fpm uses the temporary directory ' \
        'to stage files during packaging, so this setting would have ' \
        'caused fpm to loop creating staging directories and copying ' \
        'them into your package! Oops! If you are confused, maybe you could ' \
        'check your TMPDIR, TMP, or TEMP environment variables?'
    end
    
        # Changelog doesn't have a standard name, so check all common variations
    # Sort this list using LANG=C, i.e. caps first
    [
      'CHANGELIST',
      'CHANGELOG', 'CHANGELOG.asciidoc', 'CHANGELOG.md', 'CHANGELOG.rdoc', 'CHANGELOG.rst', 'CHANGELOG.txt',
      'CHANGES',   'CHANGES.md',   'CHANGES.txt',
      'ChangeLog', 'ChangeLog.md', 'ChangeLog.txt',
      'Changelog', 'Changelog.md', 'Changelog.txt',
      'changelog', 'changelog.md', 'changelog.txt',
    ].each do |changelogname|
      path = File.join(installdir, 'gems', name, changelogname)
      if File.exist?(path)
        changelog = path
        File.open path do |file|
          file.each_line do |line|
            if line =~ /#{self.version}/
              [r1, r2].each do |r|
                if r.match(line)
                  datestr = $~[:date]
                  break
                end
              end
            end
          end
        end
      end
    end
    if datestr
      date = Date.parse(datestr)
      sec = date.strftime('%s')
      attributes[:source_date_epoch] = sec
      logger.debug('Gem %s has changelog date %s, setting source_date_epoch to %s' % [name, datestr, sec])
    elsif changelog
      logger.debug('Gem %s changelog %s did not have recognizable date for release %s' % [name, changelog, self.version])
    else
      logger.debug('Gem %s did not have changelog with recognized name' % [name])
      # FIXME: check rubygems.org?
    end
  end # detect_source_date_from_changelog
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
      option '--zonetype', 'ZONETYPE',
    'Set the allowed zone types (global, nonglobal, both)',
    :default => 'value=global value=nonglobal' do |value|
      case @value
      when 'both'
        value = 'value=global value=nonglobal'
      else
        value = 'value=#{value}'
      end
    end # value
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each