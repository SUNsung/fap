
        
        platforms :ruby do
  gem 'sqlite3'
end
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
          ident_range = Sass::Source::Range.new(
        Sass::Source::Position.new(@line, to_parser_offset(line.offset)),
        Sass::Source::Position.new(@line, parser.offset),
        @options[:filename], @options[:importer])
      offset = parser.offset - 1
      res.unshift(hack_char) if hack_char
    
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
    
        <div id='rack'>
      <h3 id='env-info'>Rack ENV</h3>
      <table class='req'>
        <tr>
          <th>Variable</th>
          <th>Value</th>
        </tr>
         <% env.sort_by { |k, v| k.to_s }.each { |key, val| %>
         <tr>
           <td><%=h key %></td>
           <td class='code'><div><%=h val %></div></td>
         </tr>
         <% } %>
      </table>
      <div class='clear'></div>
    </div> <!-- /RACK ENV -->
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
            if @javascript and not @escaper.respond_to? :escape_javascript
          fail('Use EscapeUtils for JavaScript escaping.')
        end
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end