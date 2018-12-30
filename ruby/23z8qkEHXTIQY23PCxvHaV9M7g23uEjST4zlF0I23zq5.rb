
        
        ```
Executable Path: #{actual_path}
```
EOS
      end
    
    # Website =============================================================
    
          <div id='post'>
        <h3 id='post-info'>POST</h3>
        <% if req.POST and not req.POST.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
            <% req.POST.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No POST data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /POST -->
    <% end %>
    
          def set_token(session)
        session[:csrf] ||= self.class.random_token
      end