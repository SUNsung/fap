
        
              def test_invert_remove_foreign_key_with_to_table_in_options
        enable = @recorder.inverse_of :remove_foreign_key, [:dogs, to_table: :people]
        assert_equal [:add_foreign_key, [:dogs, :people]], enable
    
      def test_touching_a_record_touches_polymorphic_record
    klass = Class.new(ActiveRecord::Base) do
      def self.name; 'Toy'; end
    end
    
      # Do not dump schema after migrations.
  config.active_record.dump_schema_after_migration = false
    
      describe '.new' do
    let(:source) do
      'module Foo; end'
    end
    
                do_something
          #{close}
        RUBY
    
      context 'when a variable is reassigned ' \
          'while referencing itself in rhs and referenced' do
    it 'accepts' do
      expect_no_offenses(<<~RUBY)
        def some_method
          foo = [1, 2]
          foo = foo.map { |i| i + 1 }
          puts foo
        end
      RUBY
    end
  end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
      describe 'PUT blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      put '/blocks/#{block.id}', params: {
        block: { input_css: '.blue { color: red;}',
                 input_html: 'yo',
                 input_javascript: 'alert('hey')' }
      }
      expect(Block.last.processed_css).to include('color: red')
    end
  end
    
          it 'renders articles of long length without breaking' do
        # This is a pretty weak test, just to exercise different lengths with no breakage
        article.update(title: (0...75).map { rand(65..90).chr }.join)
        get article.path
        article.update(title: (0...100).map { rand(65..90).chr }.join)
        get article.path
        article.update(title: (0...118).map { rand(65..90).chr }.join)
        get article.path
        expect(response.body).to include 'title'
      end
    end
    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
      describe '#vendor' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, 'none'
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
        self.certificate = cert
    self.intermediaries = chain
    self.expires_at = certificate_object.not_after
    self.renew_after = (self.expires_at - 1.month) + rand(10).days
    self.save!
    logger.info 'Certificate issued (expires on #{self.expires_at}, will renew after #{self.renew_after})'
    return true
    
      def append_info_to_payload(payload)
    super
    payload[:ip] = request.ip
    payload[:user] = logged_in? ? current_user.id : nil
  end
    
      def update
    if @ip_address.update(safe_params)
      redirect_to_with_json [:edit, @ip_pool]
    else
      render_form_errors 'edit', @ip_address
    end
  end
    
      def get_time_from_string(string)
    begin
      if string =~ /\A(\d{2,4})\-(\d{2})\-(\d{2}) (\d{2})\:(\d{2})\z/
        time = Time.new($1.to_i, $2.to_i, $3.to_i, $4.to_i, $5.to_i)
      elsif string =~ /\A(\d{2,4})\-(\d{2})\-(\d{2})\z/
        time = Time.new($1.to_i, $2.to_i, $3.to_i, 0)
      else
        time = Chronic.parse(string, :context => :past)
      end
    rescue
    end
    
      def new
    @organization = Organization.new
  end