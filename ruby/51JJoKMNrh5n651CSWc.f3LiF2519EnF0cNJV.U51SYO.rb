
        
            it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
      describe '#filename' do
    it 'strips special characters' do
      expect(AgentsExporter.new(:name => 'ƏfooƐƕƺbar').filename).to eq('foo-bar.json')
    end
    
      after :each do
    @scheduler.shutdown(:wait)
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def base_url
      context[:base_url]
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def path
      @path ||= url.path
    end
    
        def with_filters(*filters)
      stack = FilterStack.new
      stack.push(*filters)
      pipeline.instance_variable_set :@filters, stack.to_a.freeze
      yield
    ensure
      @pipeline = nil
    end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=end
    
          def before
        @versions[0][0..6]
      end
    
          def escaped_name
        CGI.escape(@name)
      end
    
          def editable
        @editable
      end
    
      def app
    Precious::App
  end
end
    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
          assert_equal [true], q.map(&:delete)
      assert_equal 0, q.size
    end
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
      it 'logs large payloads' do
    output = capture_logging(Logger::WARN) do
      SomeClass.delay.doit('a' * 8192)
    end
    assert_match(/#{SomeClass}.doit job argument is/, output)
  end
    
      it 'correctly prepends middleware' do
    chain = Sidekiq::Middleware::Chain.new
    chain_entries = chain.entries
    chain.add CustomMiddleware
    chain.prepend YetAnotherCustomMiddleware
    assert_equal YetAnotherCustomMiddleware, chain_entries.first.klass
    assert_equal CustomMiddleware, chain_entries.last.klass
  end
    
          e = assert_raises ArgumentError do
        Sidekiq.on(:startp)
      end
      assert_match(/Invalid event name/, e.message)
      e = assert_raises ArgumentError do
        Sidekiq.on('startup')
      end
      assert_match(/Symbols only/, e.message)
      Sidekiq.on(:startup) do
        1 + 1
      end
    
          it 'must be supplied with :type or :coerce' do
        expect do
          subject.params do
            requires :ints, coerce_with: JSON
          end
        end.to raise_error(ArgumentError)
      end
    end