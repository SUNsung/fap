
        
              def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
      def test_continuation
    require 'continuation'
    c = Bug9523.new
    assert_raise_with_message(RuntimeError, /Marshal\.dump reentered at marshal_dump/) do
      Marshal.dump(c)
      GC.start
      1000.times {'x'*1000}
      GC.start
      c.cc.call
    end
  end
    
      # This is especially important for JRuby, since eof? there
  # is more than just a simple accessor.
  it 'does not affect the reading data' do
    gz = Zlib::GzipReader.new @io
    0.upto(9) do |i|
      gz.eof?.should be_false
      gz.read(1).should == @data[i, 1]
    end
    gz.eof?.should be_true
    gz.read().should == ''
    gz.eof?.should be_true
  end
    
        @io = StringIO.new @zip
    @gzreader = Zlib::GzipReader.new @io
  end
    
      describe '#body' do
    context 'with a single expression body' do
      let(:source) do
        'class << self; bar; end'
      end
    
            def correct_for_blockarg_type(node)
          lambda do |corrector|
            range = range_with_surrounding_space(range: node.source_range,
                                                 side: :left)
            range = range_with_surrounding_comma(range, :left)
            corrector.remove(range)
          end
        end
      end
    end
  end
end

    
              args.one? || !args[-2].hash_type?
        end
      end
    end
  end
end

    
            expect(cop.messages)
          .to eq(['Extra empty line detected at block body end.'])
      end
    
      context 'when using the class_methods method from ActiveSupport::Concern' do
    let(:config) do
      RuboCop::Config.new(
        'Lint/UselessAccessModifier' => {
          'ContextCreatingMethods' => ['class_methods']
        }
      )
    end
    
      shared_examples 'registers an offense' do |klass|
    context 'target ruby version < 2.4', :ruby23 do
      context 'when #{klass}' do
        context 'without any decorations' do
          let(:source) { '1.is_a?(#{klass})' }
    
            def autocorrect(node)
          lambda do |corrector|
            node_range = if node.respond_to?(:heredoc?) && node.heredoc?
                           range_by_whole_lines(node.loc.heredoc_body)
                         else
                           range_by_whole_lines(node.source_range)
                         end
    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
        it 'works successfully' do
      article = create(:article, user: user)
      get '#{article.path}/manage'
      expect(response).to have_http_status(:ok)
      expect(response.body).to include('Manage Your Post')
    end
    
        if BufferUpdate.where(body_text: body_text, article_id: article_id, tag_id: tag_id, social_service_name: social_service_name).
        where('created_at > ?', 2.minutes.ago).any?
      errors.add(:body_text, '\'#{body_text}\' has already been submitted very recently')
    end
  end
end

    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def new; end
    
            private
    
            def authorize
          perform_payment_action(:authorize)
        end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end