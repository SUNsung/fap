
        
            get :hello_world
    assert_equal 'Guten Tag', @response.body
  end
    
      def one
    render json: Model.new
  end
    
            def ref
          @symbol
        end
        alias to_sym ref
    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
          respond_to_on_destroy
    end
  end
    
      def respond_with_navigational(*args, &block)
    respond_with(*args) do |format|
      format.any(*navigational_formats, &block)
    end
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
    ###
#
# Mimikatz extension - grabs credentials from windows memory (older OSes).
#
# Benjamin DELPY `gentilkiwi`
# http://blog.gentilkiwi.com/mimikatz
#
# extension converted by Ben Campbell (Meatballs)
#
###
class Console::CommandDispatcher::Mimikatz
    
    ###
#
# This module implements the Bind TCP handler.  This means that
# it will attempt to connect to a remote host on a given port for a period of
# time (typically the duration of an exploit) to see if a the payload has
# started listening.  This can tend to be rather verbose in terms of traffic
# and in general it is preferable to use reverse payloads.
#
###
module BindTcp
    
          while (stime + ctimeout > Time.now.to_i)
        begin
          client = Rex::Socket::Udp.create(
            'PeerHost' => rhost,
            'PeerPort' => lport.to_i,
            'Proxies'  => datastore['Proxies'],
            'Context'  =>
              {
                'Msf'        => framework,
                'MsfPayload' => self,
                'MsfExploit' => assoc_exploit
              })
        rescue Rex::ConnectionError => e
          vprint_error(e.message)
        rescue
          wlog('Exception caught in bind handler: #{$!.class} #{$!}')
        end
    
    start = -1
min = -1
max = 0
for segment in macho.segments
  next if segment.segname == MachO::LoadCommands::SEGMENT_NAMES[:SEG_PAGEZERO]
  puts 'segment: #{segment.segname} #{segment.vmaddr.to_s(16)}'
  if min == -1 or min > segment.vmaddr
    min = segment.vmaddr
  end
  if max < segment.vmaddr + segment.vmsize
    max = segment.vmaddr + segment.vmsize
  end
end
    
    lib = File.join(Msf::Config.install_root, 'test', 'lib')
$LOAD_PATH.push(lib) unless $LOAD_PATH.include?(lib)
require 'module_test'
    
      def webcam_get_frame(quality)
    request = Packet.create_request('webcam_get_frame')
    request.add_tlv(TLV_TYPE_WEBCAM_QUALITY, quality)
    response = client.send_request(request)
    response.get_tlv(TLV_TYPE_WEBCAM_IMAGE).value
  end
    
        if si['OS'] =~ /Windows (NT|XP|2000|2003|\.NET)/i
      print_warning('Loaded Kiwi on an old OS (#{si['OS']}). Did you mean to 'load mimikatz' instead?')
    end
  end
    
        logs + ::File::Separator + Rex::FileUtils.clean_path(host + filenameinfo) + '.rc'
  end
    
        service_create(datastore['SVC_NAME'], datastore['SVC_DNAME'], file_path.gsub('\\','\\\\'), startup=2, server=nil)
    if service_start(datastore['SVC_NAME']).to_i == 0
      vprint_good('Service Binary #{file_path} Started')
    end
  end
end

    
      def prepare_railgun
    rg = session.railgun
    if (!rg.get_dll('crypt32'))
      rg.add_dll('crypt32')
    end
  end
    
        # Execute the powershell script
    print_status 'Building remote code.'
    cmd_out, running_pids, open_channels = execute_script(script, true)
    get_ps_output(cmd_out, eof)
    vprint_good 'Cleaning up #{running_pids.join(', ')}'
    
    # Function for Creating persistent script
#-------------------------------------------------------------------------------
def create_script(delay,altexe,raw,is_x64)
  if is_x64
    if altexe
      vbs = ::Msf::Util::EXE.to_win64pe_vbs(@client.framework, raw,
                                            {:persist => true, :delay => delay, :template => altexe})
    else
      vbs = ::Msf::Util::EXE.to_win64pe_vbs(@client.framework, raw,
                                            {:persist => true, :delay => delay})
    end
  else
    if altexe
      vbs = ::Msf::Util::EXE.to_win32pe_vbs(@client.framework, raw,
                                            {:persist => true, :delay => delay, :template => altexe})
    else
      vbs = ::Msf::Util::EXE.to_win32pe_vbs(@client.framework, raw,
                                            {:persist => true, :delay => delay})
    end
  end
  print_status('Persistent agent script is #{vbs.length} bytes long')
  return vbs
end
    
        session.fs.dir.mkdir(name)
    entries = session.fs.dir.entries
    res &&= entries.include?(name)
    res &&= session.fs.file.stat(name).directory?
    if res
      vprint_status('Directory created successfully')
    end
    
      def run
    id = datastore['VID']
    
      def initialize(info = {})
    super(
      update_info(
        info,
        'Name'          => 'OSX Meterpreter, Reverse HTTPS Inline',
        'Description'   => 'Run the Meterpreter / Mettle server payload (stageless)',
        'Author'        => [
          'Adam Cammack <adam_cammack[at]rapid7.com>',
          'Brent Cook <brent_cook[at]rapid7.com>',
          'timwr'
        ],
        'Platform'      => 'osx',
        'Arch'          => ARCH_X64,
        'License'       => MSF_LICENSE,
        'Handler'       => Msf::Handler::ReverseHttps,
        'Session'       => Msf::Sessions::Meterpreter_x64_OSX
      )
    )
  end
    
          before do
        File.write(snap_yaml, {
          'name' => 'custom-name',
          'version' => 'custom-version',
          'summary' => 'custom-summary',
          'description' => 'custom-description',
          'architectures' => ['custom-architecture'],
        }.to_yaml)
    
      describe '#iteration' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, nil
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
        pkgdata = {
      'arch' => architecture,
      'name' => name,
      'version' => pkg_version,
      'comment' => description,
      'desc' => description,
      'origin' => pkg_origin,
      'maintainer' => maintainer,
      'www' => url,
      # prefix is required, but it doesn't seem to matter
      'prefix' => '/',
    }
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
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
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
            next if attributes[:python_disable_dependency].include?(name)