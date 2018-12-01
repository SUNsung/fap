
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
    UserOption.where(user_id: -1).update_all(
  email_private_messages: false,
  email_direct: false
)
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for Staff category!'
        end
    
          return unless old_path.directory?
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
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
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
    def testpath(path)
  File.join(TEST_DIR, path)
end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end