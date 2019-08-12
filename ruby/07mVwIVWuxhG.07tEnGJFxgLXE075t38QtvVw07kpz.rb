
        
        class ReportService < BaseService
  include Payloadable
    
      def inboxes
    # Deliver the status to all followers.
    # If the status is a reply to another local status, also forward it to that
    # status' authors' followers.
    @inboxes ||= if @status.reply? && @status.thread.account.local? && @status.distributable?
                   @account.followers.or(@status.thread.account.followers).inboxes
                 else
                   @account.followers.inboxes
                 end
  end
    
    class ActivityPub::UpdateDistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(200)
    end
  end
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
      spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
        def test_execopt_redirect_path
      name = noninterned_name.intern
      assert_raise(TypeError) {
        system('.', [] => [name, 0])
      }
      assert_not_pinneddown(name)
    end
    
        assert_in_delta CMath.sinh(2).i, CMath.sin(2i)
    assert_in_delta CMath.cosh(2),   CMath.cos(2i)
    assert_in_delta CMath.tanh(2).i, CMath.tan(2i)
    
    end

    
      it 'invokes seek method on the associated IO object' do
    # first, prepare the mock object:
    (obj = mock('io')).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end
    
        ScratchPad.recorded.should == ['firstline\n', 'secondline\n', '\n', 'forthline']
  end
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not append anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == ''
        end
    
        describe 'with a multi-byte character' do
      it 'inserts the character into the stream' do
        @gz.ungetc 'ŷ'
        @gz.read.should == 'ŷabcde'
      end
    
      it 'each chunk should have the same prefix' do
    @chunks.all? { |chunk| chunk =~ /\A0+\z/ }.should be_true
  end
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
          def next_link
      end
    end
  end
end

    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
    $contexts = []
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end