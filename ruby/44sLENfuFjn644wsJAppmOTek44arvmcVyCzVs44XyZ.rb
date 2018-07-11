
        
              include ActionDispatch::Assertions, ActionDispatch::TestProcess
      include Rails::Dom::Testing::Assertions
      include ActionController::TemplateAssertions
      include ActionView::Context
    
          # Adds a reference.
      #
      #  t.references(:user)
      #  t.belongs_to(:supplier, foreign_key: true)
      #
      # See {connection.add_reference}[rdoc-ref:SchemaStatements#add_reference] for details of the options you can use.
      def references(*args, **options)
        args.each do |ref_name|
          @base.add_reference(name, ref_name, options)
        end
      end
      alias :belongs_to :references
    
              def add_channel(channel, on_success)
            @queue.push([:listen, channel, on_success])
          end
    
      teardown :teardown_app
    
      require 'action_view/helpers'
  require 'action_dispatch/routing/route_set'
end unless defined?(RAILS_ISOLATED_ENGINE)

    
            assert_not_called(client, :client_gone) do
          client.write('boo')
        end
      end
      assert_equal %w[ foo ], connection.errors
    end
  end
    
          events = []
      ActiveSupport::Notifications.subscribe 'broadcast.action_cable' do |*args|
        events << ActiveSupport::Notifications::Event.new(*args)
      end
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
        options[:only_patterns] = [
      /\Alanguage\./,
      /\Aclass\./,
      /\Afunctions?\./,
      /\Acontrol-structures/,
      /\Aregexp\./,
      /\Areserved\.exceptions/,
      /\Areserved\.interfaces/,
      /\Areserved\.variables/]
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        ruby_version_is '2.4' ... '2.5' do
      it 'raises a TypeError if other can't be converted to a string' do
        lambda { 'abc'.casecmp?(mock('abc')) }.should raise_error(TypeError)
      end
    end
    
            a.downcase!(:fold)
        a.should == 'ss'
      end
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
        puts 'Downloading #{url}'
    actual_sha1 = download(url, output)