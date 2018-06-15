
        
                # This returns all registered providers.
        #
        # @return [Hash]
        def providers
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.providers)
            end
          end
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
            # Otherwise, call it
        cap_host.capability(name, *argv)
    
      def test_realpath_taintedness
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      dir = File.realpath(tmpdir).untaint
      File.write(File.join(dir, base = 'test.file'), '')
      base.taint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.taint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.taint
      dir.untaint
      assert_predicate(File.realpath(base, dir), :tainted?)
      base.untaint
      dir.untaint
      assert_not_predicate(File.realpath(base, dir), :tainted?)
      assert_predicate(Dir.chdir(dir) {File.realpath(base)}, :tainted?)
    }
  end
    
      def test_memsize
    # Time objects are common in some code, try to keep them small
    skip 'Time object size test' if /^(?:i.?86|x86_64)-linux/ !~ RUBY_PLATFORM
    require 'objspace'
    t = Time.at(0)
    size = GC::INTERNAL_CONSTANTS[:RVALUE_SIZE]
    case size
    when 20 then expect = 50
    when 40 then expect = 86
    else
      flunk 'Unsupported RVALUE_SIZE=#{size}, update test_memsize'
    end
    assert_equal expect, ObjectSpace.memsize_of(t)
  rescue LoadError => e
    skip 'failed to load objspace: #{e.message}'
  end
end

    
      it 'does not decode a float when fewer bytes than a float remain and the '*' modifier is passed' do
    [ ['\xff', []],
      ['\xff\x00', []],
      ['\xff\x00\xff', []]
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
    
      it 'decodes the number of bytes specified by the count modifier' do
    'abc'.unpack(unpack_format(3)).should == ['abc']
  end
    
      def self.join_dying_thread_with_outer_ensure(kill_method_name=:kill)
    t = dying_thread_with_outer_ensure(kill_method_name) { yield }
    lambda { t.join }.should raise_error(RuntimeError, 'In dying thread')
    return t
  end
    
      it 'cannot be rescued' do
    thread = Thread.new do
      begin
        Thread.current.send(@method)
      rescue Exception
        ScratchPad.record :in_rescue
      end
     ScratchPad.record :end_of_thread_block
    end
    
    def codepoints_to_unicode(codepoints)
  if codepoints.include?(' ')
    codepoints.split(' ').map(&:hex).pack('U*')
  else
    [codepoints.hex].pack('U')
  end
end
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          def delete_authorization_session_variables
        session.delete(:client_id)
        session.delete(:response_type)
        session.delete(:redirect_uri)
        session.delete(:scopes)
        session.delete(:state)
        session.delete(:nonce)
      end