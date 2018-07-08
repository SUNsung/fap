
        
          def validate_option(method)
    if self.respond_to? 'validate_#{method}'.to_sym
      self.send('validate_#{method}'.to_sym)
    else
      false
    end
  end
    
        it 'returns Rational(1) when self is Rational(-1) and the exponent is positive and even' do
      (Rational(-1) ** bignum_value(0)).should eql(Rational(1))
      (Rational(-1) ** bignum_value(2)).should eql(Rational(1))
    end
    
          each { |u|
        dig[u] = a = []
        each{ |v| func.call(u, v) and a << v }
      }
    
        ret = set.delete(2)
    assert_equal(set, ret)
    assert_equal(Set[1,3], set)
    
    describe :string_unpack_32bit_le_signed, shared: true do
  it 'decodes an int with most significant bit set as a negative number' do
    '\x00\xaa\x00\xff'.unpack(unpack_format()).should == [-16733696]
  end
end
    
        it 'returns related entity for an existing public post' do
      post = FactoryGirl.create(:status_message, author: local_person, public: true)
      entity = DiasporaFederation.callbacks.trigger(:fetch_related_entity, 'Post', post.guid)
      expect(entity.author).to eq(post.diaspora_handle)
      expect(entity.local).to be_truthy
      expect(entity.public).to be_truthy
      expect(entity.parent).to be_nil
    end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
          def restore_request_parameters
        req = build_rack_request
        req.update_param('client_id', session[:client_id])
        req.update_param('redirect_uri', session[:redirect_uri])
        req.update_param('response_type', response_type_as_space_seperated_values)
        req.update_param('scope', session[:scopes])
        req.update_param('state', session[:state])
        req.update_param('nonce', session[:nonce])
      end
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end