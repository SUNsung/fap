
        
        Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
          def select?(options)
        options.each do |k, v|
          callable = v.respond_to?(:call) ? v : ->(server) { server.fetch(v) }
          result = \
            case k
            when :filter, :select
              callable.call(self)
            when :exclude
              !callable.call(self)
            else
              fetch(k) == v
            end
          return false unless result
        end
    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5
    
          # helper method to create proper url to apply per page filtering
      # fixes https://github.com/spree/spree/issues/6888
      def per_page_dropdown_params(args = nil)
        args = params.permit!.to_h.clone
        args.delete(:page)
        args.delete(:per_page)
        args
      end
    
          after do
        Spree::Config[:admin_orders_per_page] = @old_per_page
      end
    
        context 'cart edit page' do
      before do
        product.master.stock_items.first.update_column(:count_on_hand, 100)
        visit spree.cart_admin_order_path(order)
      end
    
                log_state_changes if params[:state]
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
      # Escapes CDATA sections in post content
  def cdata_escape(input)
    input.gsub(/<!\[CDATA\[/, '&lt;![CDATA[').gsub(/\]\]>/, ']]&gt;')
  end
    
        it 'accepts jsfiddle link' do
      liquid = generate_new_liquid(jsfiddle_link)
      rendered_jsfiddle_iframe = liquid.render
      Approvals.verify(rendered_jsfiddle_iframe, name: 'jsfiddle_liquid_tag', format: :html)
    end
    
    RSpec.describe 'CommentMutes', type: :request do
  let(:original_commenter)                      { create(:user) }
  let(:other_commenter)                         { create(:user) }
  let(:article)                                 { create(:article) }
  let(:parent_comment_by_og)                    { create(:comment, commentable: article, user: original_commenter) }
  let(:child_of_parent_by_other)              { create(:comment, commentable: article, user: other_commenter, ancestry: parent_comment_by_og.id.to_s) }
  let(:child_of_child_by_og)                { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child_of_child_of_child_by_other)  { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}') }
  let(:child_of_child_of_child_by_og)     { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}/#{child_of_child_by_other.id}') }
  let(:child_of_child_by_other)             { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child2_of_child_of_child_by_og) { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_other.id}') }
  let(:parent_comment_by_other) { create(:comment, commentable: article, user: other_commenter) }