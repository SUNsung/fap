
        
            def skip_path?(path)
      return true if path.include?('_framed.png')
      return true if path.include?('.itmsp/') # a package file, we don't want to modify that
      return true if path.include?('device_frames/') # these are the device frames the user is using
      device = path.rpartition('/').last.partition('-').first # extract device name
      if device.downcase.include?('watch')
        UI.error('Apple Watch screenshots are not framed: '#{path}'')
        return true # we don't care about watches right now
      end
      false
    end
    
      describe '#detect_project_profile_mapping' do
    it 'returns the mapping of the selected provisioning profiles', requires_xcode: true do
      workspace_path = 'gym/spec/fixtures/projects/cocoapods/Example.xcworkspace'
      project = FastlaneCore::Project.new({
        workspace: workspace_path
      })
      csm = Gym::CodeSigningMapping.new(project: project)
      expect(csm.detect_project_profile_mapping).to eq({ 'family.wwdc.app' => 'match AppStore family.wwdc.app', 'family.wwdc.app.watchkitapp' => 'match AppStore family.wwdc.app.watchkitapp', 'family.wwdc.app.watchkitapp.watchkitextension' => 'match AppStore family.wwdc.app.watchkitappextension' })
    end
    
            # Check each device to see if it is an iOS device
        all_ios = devices.map do |device|
          device = device.downcase
          device.include?('iphone') || device.include?('ipad')
        end
        # Return true if all devices are iOS devices
        return true unless all_ios.include?(false)
    
            dsym_paths.each do |current_path|
          handle_dsym(params, current_path, max_worker_threads)
        end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
            !!user
      end
    
      var props = {
    p0 : { value : 0 },
    p1 : { value : 1 },
    p2 : { value : 2 },
    p3 : { value : 3 },
    p4 : { value : 4 },
    p5 : { value : 5 },
    p6 : { value : 6 },
    p7 : { value : 7 },
    p8 : { value : 8 },
    length : { value : not_number },
    stale : { value : arr },
    after : { value : 666 }
  };
    
        begin
      session.sys.process.execute(remote_browser_path, '#{args} #{tmp_dir}\\interface.html', exec_opts)
    rescue RuntimeError => e
      elog('webcam_chat failed. #{e.class} #{e}')
      raise 'Unable to start the remote browser: #{e.message}'
    end
  end
end
end
end
end
end
end
end

    
      def initialize(info={})
    super(update_info(info,
      'Name'                 => 'Powershell Payload Execution',
      'Description'          => %q{
        This module generates a dynamic executable on the session host using .NET templates.
        Code is pulled from C# templates and impregnated with a payload before being
        sent to a modified PowerShell session with .NET 4 loaded. The compiler builds
        the executable (standard or Windows service) in memory and produces a binary
        which can be started/installed and downloaded for later use. After compilation the
        PoweShell session can also sign the executable if provided a path the a .pfx formatted
        certificate.
      },
      'License'              => MSF_LICENSE,
      'Author'               => [
        'RageLtMan <rageltman[at]sempervictus>', # Module, libs, and powershell-fu
        'Matt 'hostess' Andreko' # .NET harness, and requested modifications
      ],
    
        if session.sys.process.each_process.find { |i| i['pid'] == pid} ['arch'] == 'x86'
      addr = [mem].pack('V')
      len = [data.length].pack('V')
      ret = rg.crypt32.CryptUnprotectData('#{len}#{addr}', 16, nil, nil, nil, 0, 8)
      len, addr = ret['pDataOut'].unpack('V2')
    else
      addr = [mem].pack('Q')
      len = [data.length].pack('Q')
      ret = rg.crypt32.CryptUnprotectData('#{len}#{addr}', 16, nil, nil, nil, 0, 16)
      len, addr = ret['pDataOut'].unpack('Q2')
    end
    
      # Function to execute script on target and return the PID of the process
  #-------------------------------------------------------------------------------
  def target_exec(script_on_target)
    print_status('Executing script #{script_on_target}')
    proc = session.sys.process.execute(script_on_target, nil, 'Hidden' => true)
    print_good('Agent executed with PID #{proc.pid}')
    @clean_up_rc << 'kill #{proc.pid}\n'
    proc.pid
  end
    
    # Function for creating log folder and returning log path
#-------------------------------------------------------------------------------
def log_file(log_path = nil)
  #Get hostname
  host = @client.sys.config.sysinfo['Computer']
    
          if res
        remote_md5 = session.fs.file.md5(remote)
        local_md5  = Digest::MD5.digest(::File.read(local))
        remote_sha = session.fs.file.sha1(remote)
        local_sha  = Digest::SHA1.digest(::File.read(local))
        vprint_status('remote md5: #{Rex::Text.to_hex(remote_md5,'')}')
        vprint_status('local md5 : #{Rex::Text.to_hex(local_md5,'')}')
        vprint_status('remote sha: #{Rex::Text.to_hex(remote_sha,'')}')
        vprint_status('local sha : #{Rex::Text.to_hex(local_sha,'')}')
        res &&= (remote_md5 == local_md5)
      end
    
    TLV_TYPE_THREAD_ID          = TLV_META_TYPE_UINT    | 2500
TLV_TYPE_THREAD_PERMS       = TLV_META_TYPE_UINT    | 2502
TLV_TYPE_EXIT_CODE          = TLV_META_TYPE_UINT    | 2510
TLV_TYPE_ENTRY_POINT        = TLV_META_TYPE_QWORD   | 2511
TLV_TYPE_ENTRY_PARAMETER    = TLV_META_TYPE_QWORD   | 2512
TLV_TYPE_CREATION_FLAGS     = TLV_META_TYPE_UINT    | 2513
    
      include Msf::Payload::Single
  include Msf::Sessions::MeterpreterOptions
  include Msf::Sessions::MettleConfig
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
      def force_mobile
    session[:mobile_view] = true
    
        flash[:error] = if AppConfig.settings.invitations.open?
                      t('invitations.create.no_more')
                    else
                      t('invitations.create.closed')
                    end
    redirect_back fallback_location: stream_path
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        types.each_with_object(current_user.unread_notifications.group_by(&:type)) {|(name, type), notifications|
      @grouped_unread_notification_counts[name] = notifications.has_key?(type) ? notifications[type].count : 0
    }
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
      def delete_confirm?
    update?
  end
    
      def facebook_post!
    BufferUpdate.buff!(@article.id, fb_buffer_text, ApplicationConfig['BUFFER_FACEBOOK_ID'], 'facebook')
    BufferUpdate.buff!(@article.id, fb_buffer_text, ApplicationConfig['BUFFER_LINKEDIN_ID'], 'linkedin')
    @article.update(facebook_last_buffered: Time.current)
  end
    
    class SinatraStaticServer < Sinatra::Base
    
      end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
        def _project_root
      project.root if project.root?
    end
    
        it 'returns the string' do
      expect(project.send('hook_#{hook_name}')).to eq('echo 'on hook'')
    end
  end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
            it 'still gets the correct pre_window command' do
          expect(project.pre_window).to be_nil
        end
      end
    end
  end