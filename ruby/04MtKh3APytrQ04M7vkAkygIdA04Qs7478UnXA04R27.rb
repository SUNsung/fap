
        
                def importer_class
          DiffNoteImporter
        end
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Builds a new PR using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          def page_dir
        @page_dir
      end
    
      # base path requires 'map' in a config.ru to work correctly.
  test 'create pages within sub-directories using base path' do
    Precious::App.set(:wiki_options, { :base_path => 'wiki' })
    page = 'path'
    post '/create', :content => '123', :page => page,
         :path               => 'Mordor', :format => 'markdown', :message => 'oooh, scary'
    # should be wiki/Mordor/path
    assert_equal 'http://example.org/Mordor/' + page, last_response.headers['Location']
    get '/Mordor/' + page
    assert_match /123/, last_response.body
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        EMOJI_PATHNAME = Pathname.new(Gemojione.images_path).freeze
    
            private
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end
    
            def create
          authorize! :create, Taxon
          @taxon = Spree::Taxon.new(taxon_params)
          @taxon.taxonomy_id = params[:taxonomy_id]
          taxonomy = Spree::Taxonomy.find_by(id: params[:taxonomy_id])
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    require 'pathname'
require './plugins/octopress_filters'