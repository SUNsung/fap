
        
        module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      # @private
  def used_options
    @options & @args
  end
    
      def llvm
    @llvm ||= MacOS.llvm_build_version if MacOS.has_apple_developer_tools?
  end
    
      def filtered_list
    names = if ARGV.named.empty?
      Formula.racks
    else
      ARGV.named.map { |n| HOMEBREW_CELLAR+n }.select(&:exist?)
    end
    if ARGV.include? '--pinned'
      pinned_versions = {}
      names.each do |d|
        keg_pin = (HOMEBREW_LIBRARY/'PinnedKegs'/d.basename.to_s)
        if keg_pin.exist? || keg_pin.symlink?
          pinned_versions[d] = keg_pin.readlink.basename.to_s
        end
      end
      pinned_versions.each do |d, version|
        puts '#{d.basename}'.concat(ARGV.include?('--versions') ? ' #{version}' : '')
      end
    else # --versions without --pinned
      names.each do |d|
        versions = d.subdirs.map { |pn| pn.basename.to_s }
        next if ARGV.include?('--multiple') && versions.length < 2
        puts '#{d.basename} #{versions*' '}'
      end
    end
  end
end
    
        def value_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:likes_given)[0] || 0
    end
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
    # ECMA-262, section 15.1.3
    def Encode(uri, unescape)
      uriLength = uri.length;
      # We are going to pass result to %StringFromCharCodeArray
      # which does not expect any getters/setters installed
      # on the incoming array.
      result    = Array.new(uriLength);
      index = 0;
      k = -1;
      while ((k+=1) < uriLength) do
        cc1 = uri.charCodeAt(k);
        next if cc1.nil?
        if (self.send(unescape, cc1))
          result[index] = cc1;
          index += 1
        else
          if (cc1 >= 0xDC00 && cc1 <= 0xDFFF);
            throw('URI malformed')
          end
          if (cc1 < 0xD800 || cc1 > 0xDBFF)
            index = URIEncodeSingle(cc1, result, index);
          else
            k+=1;
            if (k == uriLength);
              throw('URI malformed')
            end
            cc2 = uri.charCodeAt(k);
            if (cc2 < 0xDC00 || cc2 > 0xDFFF);
              throw('URI malformed')
            end
            index = URIEncodePair(cc1, cc2, result, index);
          end
        end
      end
      # use .compact to get rid of nils from charCodeAt
      # return %StringFromCharCodeArray(result);
      # 'c' = 8 bit signed char
      # http://www.ruby-doc.org/core-1.9.3/Array.html#method-i-pack
      return result.compact.pack 'c*'
    end
  end # class << self
end # module

    
          def title
        '#{@page.title}'
      end
    
          def extract_renamed_path_destination(file)
        return file.gsub(/{.* => (.*)}/, '\1').gsub(/.* => (.*)/, '\1')
      end
    
          def base_url
        @base_url
      end
    
          # Finds header node inside Nokogiri::HTML document.
      #
      def find_header_node(doc)
        case @page.format
          when :asciidoc
            doc.css('div#gollum-root > h1:first-child')
          when :org
            doc.css('div#gollum-root > p.title:first-child')
          when :pod
            doc.css('div#gollum-root > a.dummyTopAnchor:first-child + h1')
          when :rest
            doc.css('div#gollum-root > div > div > h1:first-child')
          else
            doc.css('div#gollum-root > h1:first-child')
        end
      end
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
      test 'redirects to create on non-existant page' do
    name = 'E'
    get '/#{name}'
    follow_redirect!
    assert_equal '/create/#{name}', last_request.fullpath
    assert last_response.ok?
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
      s.summary     = 'A simple, Git-powered wiki.'
  s.description = 'A simple, Git-powered wiki with a sweet API and local frontend.'
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end
    
            private
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def cancel
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.cancel
            respond_with @return_authorization, default_template: :show
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            def update
          @stock_item = StockItem.accessible_by(current_ability, :update).find(params[:id])
    
            def update
          authorize! :update, taxon
          if taxon.update_attributes(taxon_params)
            respond_with(taxon, status: 200, default_template: :show)
          else
            invalid_resource!(taxon)
          end
        end
    
            def user_params
          params.require(:user).permit(permitted_user_attributes |
                                         [bill_address_attributes: permitted_address_attributes,
                                          ship_address_attributes: permitted_address_attributes])
        end
      end
    end
  end
end

    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end
    
        def define_instance_getter
      name = @name
      options = @options