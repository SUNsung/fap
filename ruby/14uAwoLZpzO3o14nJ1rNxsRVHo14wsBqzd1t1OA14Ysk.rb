        expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
      def update
    @notification_setting = current_user.notification_settings.find(params[:id])
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
      def all_projects(current_user)
    projects = []
    
      it 'decodes UTF-8 max codepoints' do
    [ ['\xf0\x90\x80\x80', [0x10000]],
      ['\xf3\xbf\xbf\xbf', [0xfffff]],
      ['\xf4\x80\x80\x80', [0x100000]],
      ['\xf4\x8f\xbf\xbf', [0x10ffff]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        run.should be_true
  end
    
        10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep1.should == false # t should be blocked on the first sleep
    t.send(@method)
    
      it 'creates a time based on given C-style gmtime arguments, interpreted as UTC (GMT)' do
    time = Time.send(@method, 1, 15, 20, 1, 1, 2000, :ignored, :ignored, :ignored, :ignored)
    time.inspect.should == '2000-01-01 20:15:01 UTC'
  end
    
          config.paths['log']             = '#{Msf::Config.log_directory}/#{Rails.env}.log'
      config.paths['config/database'] = [Metasploit::Framework::Database.configurations_pathname.try(:to_path)]
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    asm = nil
File.open('h2b.com.dbg.in', 'rb') { |fd|
	asm = fd.read(fd.stat.size)
}
    
      # DELETE /books/1
  # DELETE /books/1.json
  def destroy
    @book.destroy
    respond_to do |format|
      format.html { redirect_to books_url, notice: 'Book was successfully destroyed.' }
      format.json { head :no_content }
    end
  end
    
            def_node_matcher :only_truthiness_matters?, <<-PATTERN
          ^({if while until case while_post until_post} equal?(%0) ...)
        PATTERN
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end