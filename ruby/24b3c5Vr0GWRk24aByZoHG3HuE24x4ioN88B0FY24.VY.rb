
        
        puts 'Deduping #{links.size} links...'
    
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
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end