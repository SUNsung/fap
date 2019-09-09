
        
        helpers do
  # Returns a segment tracking ID such that local development is not
  # tracked to production systems.
  def segmentId()
    if (ENV['ENV'] == 'production')
      'wFMyBE4PJCZttWfu0pNhYdWr7ygW0io4'
    else
      '0EXTgkNx0Ydje2PGXVbRhpKKoe5wtzcE'
    end
  end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
    describe VagrantPlugins::Chef::Cap::Windows::ChefInstalled do
  include_context 'unit'
    
        # This executes the push with the given name, raising any exceptions that
    # occur.
    #
    # Precondition: the push is not nil and exists.
    def push(name)
      @logger.info('Getting push: #{name}')
    
          expect(subject.machine_names_and_options).to eq({
        foo: { config_version: '2' },
        bar: { config_version: '2', autostart: false },
        baz: { config_version: '2', autostart: true },
      })
    end
  end
    
          expect(Vagrant::Util::Subprocess).to receive(:execute).
        with('echo', 'hi', options)
      expect { subject.send(:run, shell_config, on_error, exit_codes) }.to raise_error(Vagrant::Errors::TriggersBadExitCodes)
    end
  end
    
      # Use Ruby Resolv in place of libc
  #
  # @return [boolean] enabled or not
  def self.enable_resolv_replace
    if ENV['VAGRANT_ENABLE_RESOLV_REPLACE']
      if !ENV['VAGRANT_DISABLE_RESOLV_REPLACE']
        begin
          require 'resolv-replace'
          true
        rescue
          false
        end
      else
        false
      end
    end
  end
    
          # Below article HTML variant
      it 'renders below article html variant' do
        html_variant = create(:html_variant, published: true, approved: true, group: 'article_show_below_article_cta')
        article.update_column(:body_markdown, rand(36**1000).to_s(36).to_s) # min length for article
        get article.path + '?variant_version=0'
        expect(response.body).to include html_variant.html
      end
    
          # return path set in app.rb not @page.path
      def path
        @path
      end
    
          def toc_content
        @toc_content
      end
    
    $contexts = []
    
    context 'Unicode Support' do
  setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
  end