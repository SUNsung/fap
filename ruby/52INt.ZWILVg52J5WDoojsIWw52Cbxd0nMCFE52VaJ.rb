
        
          def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
        it 'mimics a sed conditional with a many-element exclusive-end range' do
      eval '10.times { |i| ScratchPad << i if (i == 4)...(i == 5) }'
      ScratchPad.recorded.should == [4, 5]
    end
    
      def test_warn_balanced
    warning = <<WARN
test:1: warning: `%s' after local variable or literal is interpreted as binary operator
test:1: warning: even though it seems like %s
WARN
    [
     [:**, 'argument prefix'],
     [:*, 'argument prefix'],
     [:<<, 'here document'],
     [:&, 'argument prefix'],
     [:+, 'unary operator'],
     [:-, 'unary operator'],
     [:/, 'regexp literal'],
     [:%, 'string literal'],
    ].each do |op, syn|
      all_assertions do |a|
        ['puts 1 #{op}0', 'puts :a #{op}0', 'm = 1; puts m #{op}0'].each do |src|
          a.for(src) do
            assert_warning(warning % [op, syn], src) do
              assert_valid_syntax(src, 'test', verbose: true)
            end
          end
        end
      end
    end
  end
    
    load_extension('data')
    
      it 'raises an Errno::ECHILD if there are no child processes' do
    lambda { Process.wait }.should raise_error(Errno::ECHILD)
  end
    
      it 'adds a directory to $LOAD_PATH' do
    dir = tmp('rubylib/incl')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    paths.should include(dir)
  end
    
      def test_execute_outside_dir
    gemspec_dir = File.join @tempdir, 'build_command_gem'
    gemspec_file = File.join gemspec_dir, @gem.spec_name
    
        assert_in_out_err(%w(-p -l -a -e) + ['p [$-p, $-l, $-a]'],
                      'foo\nbar\nbaz') do |r, e|
      assert_equal(
        [ '[true, true, true]', 'foo',
          '[true, true, true]', 'bar',
          '[true, true, true]', 'baz' ], r)
      assert_equal([], e)
    end
  end
    
            candidates = String.instance_methods(true).collect{|m| m.to_s}
        select_message(receiver, message, candidates)
    
    if mflags = ENV['GNUMAKEFLAGS'] and /\A-(\S*)j\d*/ =~ mflags
  mflags = mflags.gsub(/(\A|\s)(-\S*)j\d*/, '\1\2')
  mflags.strip!
  ENV['GNUMAKEFLAGS'] = (mflags unless mflags.empty?)
end
ENV['LC_ALL'] = ENV['LANG'] = 'C'
SVNURL = URI.parse('https://svn.ruby-lang.org/repos/ruby/')
GITURL = URI.parse('https://git.ruby-lang.org/ruby.git')
RUBY_VERSION_PATTERN = /^\#define\s+RUBY_VERSION\s+'([\d.]+)'/
    
        # No dead or finished threads, give up to 10 seconds to start running
    t = Time.now
    Thread.pass until Time.now - t > 10 || (consumers + producers).all?{|thr| thr.status =~ /\A(?:run|sleep)\z/}
    
      File.unlink(out) if (File.size(out) == 0)
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
    classNames.each { |name|
	filesIn << clsFile.new_with_sig('Ljava.lang.String;', '#{outputDir}/#{name}.class')
}
    
    vers.each do |ver|
  case ver
  when '6.1.4'
    __NR_execve      = 7
    __NR_getpeername = 211
    __NR_accept      = 237
    __NR_listen      = 240
    __NR_bind        = 242
    __NR_socket      = 243
    __NR_connect     = 244
    __NR_close       = 278
    __NR_kfcntl      = 658