
        
          it 'does not evaluate else-body if expression is true' do
    a = []
    if true
      a << 123
    else
      a << 456
    end
    a.should == [123]
  end
    
      describe 'DATA_PTR' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_data_ptr(a).should == 1024
    end
  end
end

    
      ##
  # Adds +name+ with permissions +mode+ to the tar, yielding +io+ for writing
  # the file.  The +digest_algorithm+ is written to a read-only +name+.sum
  # file following the given file contents containing the digest name and
  # hexdigest separated by a tab.
  #
  # The created digest object is returned.
    
      DIGEST_NAME = # :nodoc:
    if DIGEST_ALGORITHM.method_defined? :name then
      DIGEST_ALGORITHM.new.name
    else
      DIGEST_ALGORITHM.name[/::([^:]+)\z/, 1]
    end
    
        assert_predicate set2, :frozen?
    assert_raise(FrozenError) {
      set2.add 5
    }
  end
end
    
      it 'ignores spaces between directives' do
    '\x01\x02'.unpack('U U').should == [1, 2]
  end
end

    
          case entity
      when DiasporaFederation::Entities::AccountDeletion
        Diaspora::Federation::Receive.account_deletion(entity)
      when DiasporaFederation::Entities::Retraction
        Diaspora::Federation::Receive.retraction(entity, recipient_id)
      else
        persisted = Diaspora::Federation::Receive.perform(entity)
        Workers::ReceiveLocal.perform_async(persisted.class.to_s, persisted.id, [recipient_id].compact) if persisted
      end
    end
    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
            MSG = 'Do not freeze immutable objects, as freezing them has no ' \
              'effect.'.freeze
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])