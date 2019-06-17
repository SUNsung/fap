
        
            begin
      group = OpenSSL::PKey::EC::Group.new(:GFp, 17, 2, 2)
      group.point_conversion_form = :uncompressed
      generator = OpenSSL::PKey::EC::Point.new(group, B(%w{ 04 05 01 }))
      group.set_generator(generator, 19, 1)
      point = OpenSSL::PKey::EC::Point.new(group, B(%w{ 04 06 03 }))
    rescue OpenSSL::PKey::EC::Group::Error
      pend 'Patched OpenSSL rejected curve' if /unsupported field/ =~ $!.message
      raise
    end
    
      it 'initializes a new UDPSocket using a Symbol' do
    @socket = UDPSocket.new(:INET)
    @socket.should be_an_instance_of(UDPSocket)
  end
    
          def self.invoke_call_x_on(foo)
        return foo.call_x
      end
    
      def test_pipe
    r, w = IO.pipe
    assert_instance_of(IO, r)
    assert_instance_of(IO, w)
    [
      Thread.start{
        w.print 'abc'
        w.close
      },
      Thread.start{
        assert_equal('abc', r.read)
        r.close
      }
    ].each{|thr| thr.join}
  end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      describe '#send_pane_command' do
    context 'no command for pane' do
      it 'returns empty string' do
        expect(project.send_pane_command('', 0, 0)).to be_empty
      end
    end