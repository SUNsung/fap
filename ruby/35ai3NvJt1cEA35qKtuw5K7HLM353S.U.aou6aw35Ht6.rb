
        
        Backtrace:\n#{e.backtrace.join('\n').gsub('*/', '*\\/')}
*/
body:before {
  white-space: pre;
  font-family: monospace;
  content: '#{header.gsub(''', '\'').gsub('\n', '\\A ')}'; }
END
      end
    
        <% unless bad_request?(exception) %>
      <div id='get'>
        <h3 id='get-info'>GET</h3>
        <% if req.GET and not req.GET.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
             <% req.GET.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No GET data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /GET -->
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end