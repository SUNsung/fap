
        
            class RespondToActionController < AbstractController::Base
      def index() self.response_body = 'success' end
    
        def to_json
      JSON.generate(as_json)
    end
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def blank?
      body.blank?
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
    class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json
    
      def send_export_file
    respond_to do |format|
      format.csv { send_data export_data, filename: export_filename }
    end
  end
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
      def existing
    existing_path = select(&File.method(:directory?))
    # return nil instead of empty PATH, to unset environment variables
    existing_path unless existing_path.empty?
  end
    
          @actual = [file, stderr]
    
    def prev_version
  return prev_feature + '.0' if source_version.end_with? '.0'
  source_version.gsub(/\d+$/) { |s| s.to_i - 1 }
end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
        <div id='cookies'>
      <h3 id='cookie-info'>COOKIES</h3>
      <% unless req.cookies.empty? %>
        <table class='req'>
          <tr>
            <th>Variable</th>
            <th>Value</th>
          </tr>
          <% req.cookies.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
          <% } %>
        </table>
      <% else %>
        <p class='no-data'>No cookie data.</p>
      <% end %>
      <div class='clear'></div>
    </div> <!-- /COOKIES -->
    
            DIRECTIVES.each do |d|
          if options.key?(d)
            directives << '#{d.to_s.sub(/_/, '-')} #{options[d]}'
          end
        end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
    require 'pleaserun/cli'
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input