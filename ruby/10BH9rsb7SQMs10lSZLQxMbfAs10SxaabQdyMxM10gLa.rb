
        
                class << self
          def select_type
            @select_type ||= name.split('::').last.sub('Select', '').downcase
          end
        end
    
    require 'action_view/rendering'
require 'active_support/core_ext/module/redefine_method'
    
          # Whenever setting view paths, makes a copy so that we can manipulate them in
      # instance objects as we wish.
      def view_paths=(paths)
        @view_paths = ActionView::PathSet.new(Array(paths))
      end
    
    When /^I fill out forgot password form with '([^']*)'$/ do |email|
  fill_forgot_password_form(email)
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
        it 'lets a user destroy their like' do
      current_user = controller.send(:current_user)
      expect(current_user).to receive(:retract).with(@like)
    
    if RUBY_ENGINE == 'ruby'
  gem 'less', '~> 2.0'
  gem 'mini_racer'
  gem 'redcarpet'
  gem 'wlang', '>= 2.0.1'
  gem 'bluecloth'
  gem 'rdiscount'
  gem 'RedCloth'
  gem 'activesupport', '~> 5.1.6'
  gem 'puma'
  gem 'yajl-ruby'
  gem 'nokogiri'
  gem 'thin'
  gem 'slim', '~> 2.0'
  gem 'coffee-script', '>= 2.0'
  gem 'rdoc'
  gem 'kramdown'
  gem 'maruku'
  gem 'creole'
  gem 'wikicloth'
  gem 'markaby'
  gem 'radius'
  gem 'asciidoctor'
  gem 'liquid'
  gem 'stylus'
  gem 'rabl'
  gem 'builder'
  gem 'erubis'
  gem 'haml', '>= 3.0'
  gem 'sass'
  gem 'reel-rack'
  gem 'celluloid', '~> 0.16.0'
  gem 'simplecov', require: false
end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
            def update
          @line_item = find_line_item
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability, :read).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end