
        
        def prev_feature
  source_version.gsub(/^(\d\.)(\d+)\..*$/) { $1 + ($2.to_i - 1).to_s }
end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
            directives.compact.sort.join('; ')
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        def generate_temporary_path
      Stud::Temporary.pathname
    end
    
      private
    
    namespace :qa do
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def initialize
      clear
    end
    
        # Returns the smaller of the two dimensions
    def smaller
      [height, width].min
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
          it 'returns false' do
        expect(described_class.editor?).to be_falsey
      end
    end
  end
    
          it 'renders the project if given a valid project config file' do
        ARGV.replace(['debug', '--project-config=#{project_config}'])
        expect { cli.start }.to output(/sample_with_project_config/).to_stdout
      end
    
    describe Tmuxinator::WemuxSupport do
  let(:klass) { Class.new }
  let(:instance) { klass.new }
    
      expansion(:inspection) {
    {
      :inspected => o.inspected == 1 ? true : false,
      :spam => o.spam == 1 ? true : false,
      :spam_score => o.spam_score.to_f,
      :threat => o.threat == 1 ? true : false,
      :threat_details => o.threat_details
    }
  }
    
      include WithinOrganization
    
      def create
    @http_endpoint = @server.http_endpoints.build(safe_params)
    if @http_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :http_endpoints]]
    else
      render_form_errors 'new', @http_endpoint
    end
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end
    
      def get_messages(scope)
    if scope == 'held'
      options = {:where => {:held => 1}}
    else
      options = {:where => {:scope => scope, :spam => false}, :order => :timestamp, :direction => 'desc'}
    
      def update
    @organization_user = organization.user_assignment(@user)
    if @organization_user.update(params.require(:organization_user).permit(:admin))
      redirect_to_with_json [organization, :users], :notice => 'Permissions for #{@organization_user.user.name} have been updated successfully.'
    else
      render_form_errors 'edit', @organization_user
    end
  end
    
    require 'rubocop/rake_task'
RuboCop::RakeTask.new
    
            # Specify additional content-types, e.g.:
        #   content_type :xls, 'application/vnd.ms-excel'
        def content_type(key, val)
          namespace_stackable(:content_types, key.to_sym => val)
        end