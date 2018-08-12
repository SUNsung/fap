
        
              html_filters.push 'd3/clean_html', 'd3/entries_v3', 'title'
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        if false then ; end.should == nil
  end
    
        assert_match %r% patchlevel 5\)%, ua
  ensure
    util_restore_version
  end
    
          pid = spawn(EnvUtil.rubybin, 'test-script')
      ps = nil
      now = Process.clock_gettime(Process::CLOCK_MONOTONIC)
      stop = now + 30
      begin
        sleep 0.1
        ps = `#{PSCMD.join(' ')} #{pid}`
        break if /hello world/ =~ ps
        now = Process.clock_gettime(Process::CLOCK_MONOTONIC)
      end until Process.wait(pid, Process::WNOHANG) || now > stop
      assert_match(/hello world/, ps)
      assert_operator now, :<, stop
      Process.kill :KILL, pid
      Timeout.timeout(5) { Process.wait(pid) }
    end
  end
    
            candidates = Symbol.instance_methods.collect{|m| m.to_s}
        select_message(receiver, message, candidates, sep)
    
    def exec_test(pathes)
  @count = 0
  @error = 0
  @errbuf = []
  @location = nil
  @columns = 0
  @width = pathes.map {|path| File.basename(path).size}.max + 2
  pathes.each do |path|
    @basename = File.basename(path)
    $stderr.printf('%s%-*s ', erase(@quiet), @width, @basename)
    $stderr.flush
    @columns = @width + 1
    $stderr.puts if @verbose
    count = @count
    error = @error
    load File.expand_path(path)
    if @tty
      if @error == error
        msg = 'PASS #{@count-count}'
        @columns += msg.size - 1
        $stderr.print '#{@progress_bs}#{@passed}#{msg}#{@reset}'
      else
        msg = 'FAIL #{@error-error}/#{@count-count}'
        $stderr.print '#{@progress_bs}#{@failed}#{msg}#{@reset}'
        @columns = 0
      end
    end
    $stderr.puts unless @quiet and @tty and @error == error
  end
  $stderr.print(erase) if @quiet
  if @error == 0
    if @count == 0
      $stderr.puts 'No tests, no problem'
    else
      $stderr.puts '#{@passed}PASS#{@reset} all #{@count} tests'
    end
    exit true
  else
    @errbuf.each do |msg|
      $stderr.puts msg
    end
    $stderr.puts '#{@failed}FAIL#{@reset} #{@error}/#{@count} tests failed'
    exit false
  end
end
    
        # wait untl all threads have finished
    sleep 0.01 until prod_threads.find_all{|t| t.status}.count == 0
    
        t = Thread.new { tester.sync_lock(:EX) }
    
      ## Constants For Hangul
  # for details such as the meaning of the identifiers below, please see
  # http://www.unicode.org/versions/Unicode7.0.0/ch03.pdf, pp. 144/145
  SBASE = 0xAC00
  LBASE = 0x1100
  VBASE = 0x1161
  TBASE = 0x11A7
  LCOUNT = 19
  VCOUNT = 21
  TCOUNT = 28
  NCOUNT = VCOUNT * TCOUNT
  SCOUNT = LCOUNT * NCOUNT
    
        def find_remote!(username, domain)
      find_remote(username, domain) || raise(ActiveRecord::RecordNotFound)
    end
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper