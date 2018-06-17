
        
          def test_utc_p
    assert_predicate(Time.gm(2000), :gmt?)
    assert_not_predicate(Time.local(2000), :gmt?)
    assert_not_predicate(Time.at(0), :gmt?)
  end
    
      it 'decodes the remaining ints when passed the '*' modifier after another directive' do
    'dcbahgfe'.unpack(unpack_format()+unpack_format('*')).should == [1684234849, 1751606885]
  end
    
      it 'respects Thread subclasses' do
    c = Class.new(Thread)
    t = c.send(@method) { }
    t.should be_kind_of(c)
    
    EOS
end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
          # Prints text in yellow.
      def warning(text)
        puts color.colorize(text, :yellow)
      end
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
      desc 'Finished'
  task :finished do
  end
    
            def argument?
          ARGUMENT_DECLARATION_TYPES.include?(@declaration_node.type)
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
        expect(corrected).to eq(''something'.to_sym')
  end
end

    
            it 'registers an offense for #{type} not beginning '\
          'and ending with a blank line' do
          inspect_source(source)
          expect(cop.messages).to eq([missing_begin, missing_end])
        end